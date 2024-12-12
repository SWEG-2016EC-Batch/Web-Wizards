#include <iostream>
using namespace std;

int main () {

double worked_hour, bonus_rate, base_salary, gross_income, net_salary, bonus, pension,pension_rate=0.07, tax_rate, tax,salary_after_pension; 

cout << "Enter your base salary" << endl;
cin >> base_salary;
cout << "Enter your weekly working hour" << endl;
cin >> worked_hour;
 
if (worked_hour > 40) {
    cout << "Enter your bonus rate between 0 and 1" << endl;
    cin >> bonus_rate;
} else {
    bonus_rate = 0;
}


if (base_salary >= 0 && base_salary <= 200 ) {
    tax_rate = 0;
} else if(base_salary > 200 && base_salary <= 600 ) {
    tax_rate = 0.1;
} else if(base_salary > 600 && base_salary <= 1200 ) {
    tax_rate = 0.15;
} else if(base_salary > 1200 && base_salary <= 2000 ) {
    tax_rate = 0.20;
} else if(base_salary > 2000 && base_salary <= 3500 ) {
    tax_rate = 0.25;
} else if(base_salary > 3500 ) {
    tax_rate = 0.30;
}
  
pension = base_salary * pension_rate;
salary_after_pension = base_salary - pension;
bonus = worked_hour * bonus_rate;
gross_income = salary_after_pension + bonus;
tax = gross_income * tax_rate;
net_salary = gross_income - tax;

cout << "Your pension is " << pension << endl;
cout <<"Your salary after pension is " << salary_after_pension << endl;
cout << "Your bonus is " << bonus << endl;
cout << "Your gross income is "<< gross_income << endl;
cout << "Your tax is " << tax << endl; 
cout << "Your net salary is " << net_salary;

return 0;
}

 
