#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float basicSalary = 0, bonusRate = 0, workedHours = 0;
    float bonus = 0, grossSalary = 0, pension = 0, incomeTax = 0, netSalary = 0;
    float extraWorkedHours = 0, taxRate = 0;

    cout << "\nPlease enter basic salary: ";
    cin >> basicSalary;

    cout << "\nPlease enter worked hours: ";
    cin >> workedHours;
    

    if (cin.fail()) {
        cout << "\nPlease enter a valid number.\n";
        return 1;
    }

    if (basicSalary < 200) {
        taxRate = 0;
    }
    else if (basicSalary >= 200 && basicSalary < 600) {
        taxRate = 0.1;
    }
    else if (basicSalary >= 600 && basicSalary < 1200) {
        taxRate = 0.15;
    }
    else if (basicSalary >= 1200 && basicSalary < 2000) {
        taxRate = 0.2;
    }
    else if (basicSalary >= 2000 && basicSalary < 3500) {
        taxRate = 0.25;
    }
    else if (basicSalary >= 3500) {
        taxRate = 0.3;
    }
    

    if (workedHours > 40) {
        cout << "\nPlease enter over-time bonus rate: ";
        cin >> bonusRate;

        extraWorkedHours = workedHours - 40;
        bonus = extraWorkedHours * bonusRate;
    } else {
        bonus = 0;
    }

    grossSalary = basicSalary + bonus;
    pension = basicSalary * 0.07;
    incomeTax = grossSalary * taxRate;
    netSalary = grossSalary - pension - incomeTax;

    cout << "\nTax rate: " << taxRate * 100 << "%" << endl;
    cout << "Gross salary: " << grossSalary << endl;
    cout << "Pension (7%): " << pension << endl;
    cout << "Income Tax: " << incomeTax << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Extra worked hours: " << extraWorkedHours << endl;
    cout << "Net salary: " << netSalary << endl;

    return 0;
}
