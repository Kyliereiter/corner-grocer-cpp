# Corner Grocer – Grocery Frequency Tracker (C++)

This C++ console application was developed for SNHU's CS 210 course (Project Three). It analyzes a grocery list stored in a file and calculates how many times each item appears. It also allows users to search for item counts and generate a histogram of all items purchased.

---

## 🛒 Features

- Reads grocery item data from an input file  
- Tracks item frequency using `std::map`  
- Allows user to:
  - Search for a specific item’s frequency  
  - View a list of all item frequencies  
  - Display a histogram with visual asterisks  
- Writes results to a backup file (`frequency.dat`)

---

## 🧪 Sample Output

Search Result:
Enter item name: apples
Frequency of apples: 4

Histogram:
apples: ****
bread: ***
milk: **

---

## 🛠️ Technologies Used

- C++
- File Input/Output
- Standard Template Library (STL)
- `std::map`
- Console Interface

---

## 📁 File Structure

- `main.cpp` – Main menu and input handling  
- `GroceryTracker.cpp` – Class for counting and displaying data  
- `GroceryTracker.h` – Header file for class definitions  
- `CS210_Project_Three_Input_File.txt` – Sample grocery input  
- `frequency.dat` – Output backup file

---

## 📚 Project Purpose

This project demonstrates C++ fundamentals including:

- Reading from and writing to files  
- Using maps for data storage  
- Modular code with header files  
- Building user-friendly command-line tools
