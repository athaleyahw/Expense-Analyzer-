#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

struct Expense {
    string date;
    string category;
    double amount;
};

vector<Expense> loadExpenses(const string& filename) {
    vector<Expense> list;
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        Expense e;

        getline(ss, e.date, ',');
        getline(ss, e.category, ',');
        string amountStr;
        getline(ss, amountStr, ',');

        e.amount = stod(amountStr);
        list.push_back(e);
    }
    return list;
}

void analyze(const vector<Expense>& list) {
    map<string, double> totals;
    double grandTotal = 0;

    for (const auto& e : list) {
        totals[e.category] += e.amount;
        grandTotal += e.amount;
    }

    cout << "\n=== Spending Report ===\n";
    cout << "Total spent: $" << grandTotal << "\n\n";

    string topCategory;
    double maxVal = 0;

    for (auto& p : totals) {
        cout << p.first << ": $" << p.second << endl;
        if (p.second > maxVal) {
            maxVal = p.second;
            topCategory = p.first;
        }
    }

    cout << "\nHighest spending category: " << topCategory << endl;
}

int main() {
    vector<Expense> expenses = loadExpenses("expenses.csv");
    analyze(expenses);
    return 0;
}