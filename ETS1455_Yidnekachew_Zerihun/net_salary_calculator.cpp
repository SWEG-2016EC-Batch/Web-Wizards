#include <iostream>
using namespace std;
int main() {
// Declare variables
    string name;
    double base_salary,weekly_working_hour,bonus_rate,bonus_payment,gross_salary,net_salary,tax_deduction_rate=0.15,pention_rate=0.05;
// Declare variables
    cout<<"please enter the employee name: ";
    getline(cin,name);
    cout<<"please,enter "<<name<<"'s base salary: ";
    cin>>base_salary;
    cout<<"please enter "<<name<<"'s weekly working hour: ";
    cin>>weekly_working_hour;
    cout<<"please enter the bonus rate which is between 0 and 1: ";
    cin>>bonus_rate;
// Calculate bonus payment
    bonus_payment=base_salary*weekly_working_hour*bonus_rate;
// Calculate gross salary
    gross_salary=base_salary+bonus_payment;
// Calculate deductions
    double tax_deduction=gross_salary*tax_deduction_rate;
    double pention=base_salary*pention_rate;
// Calculate net salary
    net_salary=gross_salary-(tax_deduction+pention);
// Print the results
    cout<<name<<"'s bonus payment is: "<<bonus_payment<<endl;
    cout<<name<<"'s gross salary is: "<<gross_salary<<endl;
    cout<<name<<"'s deducted tax is: "<<tax_deduction<<endl;
    cout<<name<<"'s pention is: "<<pention<<endl;
    cout<<name<<"'s net salary is: "<<net_salary<<endl;
    
    
    
}
