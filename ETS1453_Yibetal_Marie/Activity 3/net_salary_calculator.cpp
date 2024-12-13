#include <iostream>
using namespace std;
int main() {
    long int baseSalary,workedHours,bonus,incomeTax,grossSalary,netPay,extra_worked_hours=0;
    float bonus_rate,pension=0.07,tax_rate;
    line6:
    cout<<"Enter a person's current base salary: ";
    cin>>baseSalary;
    if(cin.fail()||baseSalary<0){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input,only positive number.enter again."<<endl;
        goto line6;
    }
    // take person's working hours
    line18:
    cout<<"Enter a person's worked hours: ";
    cin>>workedHours;
    if(cin.fail()||workedHours<0){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input,only positive number.enter again!"<<endl;
        goto line18;
    }
    if(workedHours>40){
        line28:
        cout<<"Enter the overtime bonus rate of the company: ";
        cin>>bonus_rate;
        if(cin.fail()||bonus_rate<0){
            cin.clear();
            cin.ignore();
            cout<<"Invalid input,only positive number.enter again!"<<endl;
            goto line28;
    }
        extra_worked_hours = workedHours - 40;
        bonus = baseSalary*extra_worked_hours*bonus_rate;
    }

    int pension_deduction = pension*baseSalary;
    grossSalary = baseSalary + bonus;

    if(baseSalary<200){
        incomeTax = 0;
    }else if(baseSalary>=200 && baseSalary < 600){
        tax_rate = 0.1;
        incomeTax = tax_rate*grossSalary;
    }else if(baseSalary>=600 && baseSalary < 1200){
        tax_rate=0.15;
        incomeTax = tax_rate*grossSalary;
    }else if (baseSalary>=1200 && baseSalary < 2000){
        tax_rate=0.2;
        incomeTax = tax_rate*grossSalary;
    }else if(baseSalary>=2000 && baseSalary < 3500){
        tax_rate=0.25;
        incomeTax = tax_rate*grossSalary;
    }else if(baseSalary >= 3500){
        tax_rate = 0.3;
        incomeTax = tax_rate*grossSalary;
    }

    netPay = grossSalary-(pension_deduction+incomeTax);

    cout<<"The person's base salary: "<<baseSalary<<" birr"<<endl;
    cout<<"The person's extra worked hours: "<<extra_worked_hours<<" hrs"<<endl;
    cout<<"The person's bonus payment: "<<bonus<<" birr"<<endl;
    cout<<"The person's gross salary: "<<grossSalary<<" birr"<<endl;
    cout<<"the peson's tax rate is: "<<tax_rate*100<<"%"<<endl;
    cout<<"The person's income tax: "<<incomeTax<<" birr"<<endl;
    cout<<"The person's pension deduction: "<<pension_deduction<<" birr"<<endl;
    cout<<"The person's net salary: "<<netPay<<" birr";
    return 0;
}