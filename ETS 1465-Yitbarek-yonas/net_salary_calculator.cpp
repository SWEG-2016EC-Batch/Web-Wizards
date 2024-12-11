/*This C++ program calculates an employee's net salary based on their basic salary, worked hours, and bonus rate. 
    It handles input validation to ensure accuracy and applies taxes and pension deductions. 
    The program supports continuous calculations for multiple employees.*/
#include <iostream>
using namespace std;
int main() {
    int worked_hour;  
    double gross_salary = 0, basic_salary, bonusRate, pensionRate = 0.07, tax = 0, bonusPayment, bonus, pension, net_salary;
    char userInput;
    do{
     trial:
         cout << "Enter base salary: ";
    cin >> basic_salary;  
 if (cin.fail()||basic_salary<0) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial;
        }
     trial1:
         cout << "Enter the worked hours: ";
    cin >> worked_hour; 
 if (cin.fail()||worked_hour<0) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial1;
        }
 // If worked hours are more than 40, calculate bonus
    if(worked_hour > 40) {
        trial2:
        cout << "Enter the bonus rate between (0-1): ";
        cin >> bonusRate;  // 
 if (cin.fail()||bonusRate<=0||bonusRate>=1) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial2;
        }
bonus = worked_hour * bonusRate;  // Bonus calculation
    }
    else {
        bonus = 0;  // No bonus if worked hours are less than or equal to 40
    }
gross_salary = basic_salary + bonus;
pension = basic_salary * pensionRate;
if (basic_salary <= 200) {
        tax = basic_salary * 0.0;
    }
    else if (basic_salary <= 600) {
        tax = gross_salary * 0.1;
    }
    else if (basic_salary <= 1200) {
        tax = gross_salary * 0.15;
    }
    else if (basic_salary <= 2000) {
        tax = gross_salary * 0.2;
    }
    else if (basic_salary <= 3500) {
        tax = gross_salary * 0.25;
    }
    else {
        tax = gross_salary * 0.35;
    }
 net_salary = gross_salary - pension - tax;
cout << "Your net payment is: " << net_salary << " $" << endl;
    cout<<"\nwould you like to calculate net salary for another person?(enter'c'or'C'to continue or other character to terminate)";
    cin>>userInput;
    }while(userInput=='c'||userInput=='C');

    return 0;
}
