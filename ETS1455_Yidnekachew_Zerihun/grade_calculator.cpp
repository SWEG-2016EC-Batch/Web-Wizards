#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float test,quiz,project,assignment,finalExam,totalMark;
    label1:
    cout<<"Please enter your test result: ";
    cin>>test;
    if(cin.fail()||(test>15||test<0))
    {
        cin.clear();
        cin.ignore();
        cout<<"please enter a correct test result."<<endl;
        goto label1;
    }
    label2:
    cout<<"Please enter your quiz result: ";
    cin>>quiz;
    if(cin.fail()||(quiz>5||quiz<0))
    {
        cin.clear();
        cin.ignore();
        cout<<"please enter a correct quiz result."<<endl;
        goto label2;
    }
    label3:
    cout<<"Please enter your project result: ";
    cin>>project;
    if(cin.fail()||(project>20||project<0))
    {
        cin.clear();
        cin.ignore();
        cout<<"please enter a correct project result."<<endl;
        goto label3;
    }
    label4:
    cout<<"Please enter your assignment result: ";
    cin>>assignment;
    if(cin.fail()||(assignment>10||assignment<0))
    {
        cin.clear();
        cin.ignore();
        cout<<"please enter a correct assignment result."<<endl;
        goto label4;
    }
    label5:
    cout<<"Please enter your final test result: ";
    cin>>finalExam;
    if(cin.fail()||(finalExam>50||finalExam<0))
    {
        cin.clear();
        cin.ignore();
        cout<<"please enter a correct final test result."<<endl;
        goto label5;
    }
    totalMark=test+quiz+project+assignment+finalExam;
    cout<<"your total mark is: "<<totalMark;
    if(totalMark>=90 && totalMark<=100){
        cout<<"you got A+";
    }else if(totalMark>=80 && totalMark<=90){
        cout<<"you got A";
    }else if(totalMark>=75 && totalMark<=80){
        cout<<"you got B+";
    }else if(totalMark>=60 && totalMark<=75){
        cout<<"you got B";
    }else if(totalMark>=55 && totalMark<=60){
        cout<<"you got C+";
    }else if(totalMark>=45 && totalMark<=55){
        cout<<"you got C"; 
    }else if(totalMark>=30 && totalMark<=45){
        cout<<"you got D";     
    }else{
        cout<<"you got F"; 
    }                 





    EXIT_SUCCESS;
}
