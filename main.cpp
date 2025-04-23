// Author: Kylie Reiter
// Purpose: Main driver to provide a menu for item frequency tracking.

#include <iostream>
#include <string>
#include "GroceryTracker.h"

using namespace std;

int main() {
    GroceryTracker tracker;
    string inputFilename = "CS210_Project_Three_Input_File.txt";
    string outputFilename = "frequency.dat";
    int choice;
    string item;

    tracker.LoadItemsFromFile(inputFilename);
    tracker.SaveFrequenciesToFile(outputFilename);

    do {
        cout << "\n======= Corner Grocer Menu =======\n";
        cout << "1. Search for an item\n";
        cout << "2. Display item purchase frequencies\n";
        cout << "3. Display histogram of item purchases\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter item name: ";
            cin.ignore();  // Clean up newline
            getline(cin, item);
            cout << item << " was purchased " << tracker.GetItemFrequency(item) << " time(s)." << endl;
            break;

        case 2:
            tracker.DisplayFrequencies();
            break;

        case 3:
            tracker.DisplayHistogram();
            break;

        case 4:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
