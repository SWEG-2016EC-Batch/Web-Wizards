
#include <iostream>
using namespace std;
int main() {

    int test,project,assignment,finalExam,quiz,total_mark;
    cout<<"Welcome to Grade Calculator..."<<endl;
    line8:
    cout<<"Enter a person's test score:(15%) ";
    cin>>test;
    if(cin.fail()||test<0||test>15){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input/out of range,insert only positive number & within the range: "<<endl;
        goto line8;
    }
    line17:
    cout<<"Enter a person's quiz mark:(5%) ";
    cin>>quiz;
      if(cin.fail()||quiz<0||quiz>5){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input/out of range,insert only positive number & within the range: "<<endl;
        goto line17;
    }
    line26:
    cout<<"Enter a person's project score:(20%) ";
    cin>>project;
      if(cin.fail()||project<0||project>20){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input/out of range,insert only positive number & within the range: "<<endl;
        goto line26;
    }
    line35:
    cout<<"Enter a person's assignment mark:(10%) ";
    cin>>assignment;
      if(cin.fail()||assignment<0||assignment>10){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input/out of range,insert only positive number & within the range: "<<endl;
        goto line35;
    }
    line44:
    cout<<"Enter a person's final exam:(50%) ";
    cin>>finalExam;
      if(cin.fail()||finalExam<0||finalExam>50){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input/out of range,insert only positive number & within the range: "<<endl;
        goto line44;
    }
    total_mark = test+quiz+project+assignment+finalExam;

    if(total_mark>=90){
        cout<<"the person's mark grade is: A+ "<<endl;
    }else if(total_mark>=85){
        cout<<"the person's mark grade is: A "<<endl;
    }else if(total_mark >= 75){
        cout<<"the person's mark grade is: B+ "<<endl;
    }else if (total_mark>=60){
        cout<<"the person's mark grade is: B "<<endl;
    }else if(total_mark >=55){
        cout<<"the person's mark grade is: C+ "<<endl;
    }else if(total_mark>=45){
        cout<<"the person's mark grade is: C "<<endl;
    }else if(total_mark>30){
        cout<<"the person's mark grade is: D "<<endl;
    }else if(total_mark<30){
        cout<<"the person's mark grade is:F "<<endl;
    }
    return 0;
}