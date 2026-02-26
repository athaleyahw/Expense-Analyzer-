
## Overview
Expense Analyzer is a C++ program that reads a CSV file of expenses, calculates total spending, identifies the highest spending category, and provides a detailed category breakdown with percentages. This project demonstrates file handling, structs, vectors, and basic data analysis in C++.

## Features
- Load expenses from a CSV file
- Calculate total spending
- Identify the category with the highest expenses
- Display category breakdown with percentages
- Works with any monthly expense CSV file

## Technologies Used
- C++
- STL (vector, map)
- File I/O

## Sample CSV Format
2025-02-01,Food,12.50
2025-02-02,Transport,5.25
2025-02-03,Shopping,45.00
2025-02-04,Food,27.75
2025-02-05,Entertainment,20.00

## Sample Output
========== Monthly Spending Report ==========
Total Spent: $110.50
Highest Category: Shopping ($45.00)

Category Breakdown:
Food $40.25 (36.42%)
Shopping $45.00 (40.72%)
Transport $5.25 (4.75%)
Entertainment $20.00 (18.09%)

## How to Run
1. Clone this repository:
git clone https://github.com/athaleyahw/Expense-Analyzer-.git

2. Open `main.cpp` in a C++ IDE (e.g., Visual Studio)  
3. Ensure `expenses.csv` is in the same folder  
4. Build and run the program

## Notes
- You can update `expenses.csv` with your own data to test different monthly expenses.
- The program automatically calculates total spending and category breakdowns.

