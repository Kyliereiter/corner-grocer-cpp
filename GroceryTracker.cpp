// Author: Kylie Reiter
// Purpose: Implements functionality for tracking and displaying grocery item frequencies.

#include "GroceryTracker.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void GroceryTracker::LoadItemsFromFile(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Could not open input file.\n";
        exit(EXIT_FAILURE);
    }

    string item;
    while (getline(inputFile, item)) {
        itemFrequency[item]++;
    }

    inputFile.close();
}

int GroceryTracker::GetItemFrequency(const string& itemName) const {
    auto it = itemFrequency.find(itemName);
    return (it != itemFrequency.end()) ? it->second : 0;
}

void GroceryTracker::DisplayFrequencies() const {
    for (const auto& pair : itemFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }
}

void GroceryTracker::DisplayHistogram() const {
    for (const auto& pair : itemFrequency) {
        cout << setw(15) << left << pair.first << " " << string(pair.second, '*') << endl;
    }
}

void GroceryTracker::SaveFrequenciesToFile(const string& filename) const {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error: Could not open output file.\n";
        exit(EXIT_FAILURE);
    }

    for (const auto& pair : itemFrequency) {
        outFile << pair.first << " " << pair.second << endl;
    }

    outFile.close();
}
