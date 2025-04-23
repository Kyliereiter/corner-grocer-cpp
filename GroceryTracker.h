// Author: Kylie Reiter
// Purpose: Header file for tracking grocery item frequencies.

#ifndef GROCERY_TRACKER_H
#define GROCERY_TRACKER_H

#include <string>
#include <map>

class GroceryTracker {
public:
    void LoadItemsFromFile(const std::string& filename);
    int GetItemFrequency(const std::string& itemName) const;
    void DisplayFrequencies() const;
    void DisplayHistogram() const;
    void SaveFrequenciesToFile(const std::string& filename) const;

private:
    std::map<std::string, int> itemFrequency;
};

#endif
