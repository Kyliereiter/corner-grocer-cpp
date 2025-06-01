# 🛒 Corner Grocer – Grocery Frequency Tracker (C++)

This C++ console application was developed for SNHU's CS 210 course (Project Three). It analyzes a grocery list stored in a file and calculates how many times each item appears. It also allows users to search for item counts and generate a histogram of all items purchased.

---

## 📦 Features

- Reads grocery item data from an input file  
- Tracks item frequency using `std::map`  
- Allows the user to:
  - Search for a specific item’s frequency  
  - View a list of all item frequencies  
  - Display a histogram with visual asterisks  
- Writes results to a backup file (`frequency.dat`)

---

## 🧪 Sample Output

```text
Search Result:
Enter item name: apples
Frequency of apples: 4

Histogram:
apples: ****
bread: ***
milk: **
```
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

## 🚀 How to Run

1. Clone the repo:
   ```bash
   git clone https://github.com/Kyliereiter/corner-grocer-cpp.git
   cd corner-grocer-cpp
---

## 🎯 Project Purpose

This project demonstrates core C++ concepts such as:

- Reading from and writing to files  
- Using maps for frequency counting  
- Modular class-based design with headers  
- Building user-friendly terminal apps

---

## 👤 About the Developer

Created by **Kylie Reiter**  
🎓 Computer Science – Software Engineering Student  
🔗 [LinkedIn](https://www.linkedin.com/in/kyliereiter93/)  
💻 [GitHub](https://github.com/Kyliereiter)
