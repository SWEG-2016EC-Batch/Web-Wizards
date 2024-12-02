#include<iostream>
#include <regex>
#include<cctype>
using namespace std;

int main () {
    string name;
    int weekly_working_hour;
    float base_salary;
    float bonus_rate_per_hour;
    float pension_rate = 0.05;
    float tax_rate = 0.15;
    int attempts = 3;

    line13:
    cout<<"Enter the name of a person : ";
    getline(cin,name);
    for(char c : name) {
        if (isdigit(c)) {
            cout<<",Invalid input,please enter alphaber character"<<endl;
            // cin.clear();
            // cin.ignore();
            goto line13;
        }
    }
    cout << "Enter the initial salary of "<<name<<" : ";
    cin >> base_salary;
    if (cin.fail() || base_salary < 0) {
        cin.clear();
        cin.ignore();
        cout<<"Invalid input,"<<endl;
        goto line13;
    }
    line22:
    cout << "Enter the weekly working hour of "<<name<<" : ";
    cin >> weekly_working_hour;
    if (cin.fail() || weekly_working_hour < 0 ) {
        cin.clear();
        cin.ignore();
        cout<<"Invalid input,enter only positive number."<<endl;
        goto line22;
    }else if( weekly_working_hour > 168) {
        // due to maximum weekly hours is 168, so it must be less than this amount
        cout<<"You enter wrong amount since there is 168 hrs in week.try again"<<endl;
        goto line22;
    }
    line37:
    cout << "Enter the bonus rate per hour that the campany give(0-1): ";
    cin >> bonus_rate_per_hour;
    if (cin.fail() || bonus_rate_per_hour < 0 || bonus_rate_per_hour > 1) {
        cin.clear();
        cin.ignore();
        cout<<"Invalid input,please only enter positive number (0-1)"<<endl;
        goto line37;
    }

    // to find the bonus payment

    float bonus_payment = weekly_working_hour * bonus_rate_per_hour*base_salary;
    cout <<name<<"'s bonus payment is : " << bonus_payment << endl;

    // to calculate the gross salary of the person

    float gross_salary = base_salary + bonus_payment;
    cout<<name<<"'s monthly gross_salary is : "<<gross_salary<<endl;

    float tax_deduction = gross_salary*tax_rate;
    float pension_deduction = base_salary*pension_rate;
    cout<<name<<"'s tax deduction is "<<tax_deduction<<endl;
    cout<<name<<"'s pension deduction is "<<pension_deduction<<endl;

    float net_salary = gross_salary -(tax_deduction + pension_deduction);
    cout<<"The net salary of "<<name<<" is : "<<net_salary;

}
