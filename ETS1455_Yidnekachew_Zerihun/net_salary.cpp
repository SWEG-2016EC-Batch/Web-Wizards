#include <iostream>
using namespace std;

int main() {
    string employeeName;
    double netSalary,basicSalary,workedHours,grossSalary,taxRate,taxDeduction,bonus,bonusRate,pension,pensionRate = 0.07,extraWorkedHours;
    cout<<"WELCOME! this program help you to calculate the net salary of your employee,If you want to calculate Please enter employee's name: ";
    getline(cin,employeeName);
    label1:
    cout<<"please enter "<<employeeName<<"'s basic salary: ";
    cin>>basicSalary;
    if(cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout<<"Please enter number only"<<endl;
        goto label1;
    }
    label2:
    cout<<"please enter "<<employeeName<<"'s worked hours: ";
    cin>>workedHours;
    if(cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout<<"Please enter number only."<<endl;
        goto label2;
    }
    label3:
    cout<<"please enter "<<employeeName<<"'s bonus rate between 0 and 1: ";
    cin>>bonusRate;
    if(cin.fail()||(bonusRate<0||bonusRate>1))
    {
        cin.clear();
        cin.ignore();
        cout<<"Please enter only number between 0 and 1."<<endl;
        goto label3;
    }
    if(workedHours>40){
        extraWorkedHours=workedHours-40;
        bonus=extraWorkedHours*bonusRate;
    }
    grossSalary=basicSalary + bonus;
    if(grossSalary<200){
        taxDeduction=grossSalary*0.0;
    }else if(grossSalary>200 && grossSalary<600){
        taxDeduction=grossSalary*0.1;
    }else if(grossSalary>600 && grossSalary<1200){
        taxDeduction=grossSalary*0.15;
    }else if(grossSalary>1200 && grossSalary<2000){
        taxDeduction=grossSalary*0.2;
    }else if(grossSalary>2000 && grossSalary<3500){
        taxDeduction=grossSalary*0.25;
    }else{
        taxDeduction=grossSalary*0.3;
    }
    pension=basicSalary*pensionRate;
    netSalary=(grossSalary-pension-taxDeduction);


    cout<<employeeName<<"'s bonus is: "<<bonus<<endl;
    cout<<employeeName<<"'s gross salary is: "<<grossSalary<<endl;
    cout<<employeeName<<"'s tax deduction is: "<<taxDeduction<<endl;
    cout<<employeeName<<"'s pension is: "<<pension<<endl;
    cout<<employeeName<<"'s net salary is: "<<netSalary<<endl;
  
    
    EXIT_SUCCESS;
}
