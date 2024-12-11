/*This C++ program works to calculate a student's grade based on assessments including tests, quizzes, projects, assignments, and a final exam. 
  The grade is determined using predefined score ranges. 
  The program supports multiple calculations with a user-friendly loop. Input is entered as percentages of the total assessment weight.*/
#include <iostream>
using namespace std;
int main() {
         char quitChoice;
    do{
    float Test, Quiz, Project, Assignment, Final_exam, sum = 0;

    cout << "Enter the student Assesment  Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50% : ";
    cin >> Test >> Quiz >> Project >> Assignment >> Final_exam;
    
    sum = Test + Quiz + Project + Assignment + Final_exam;
if(sum >= 90) {
        cout << "The student score A+"; 
    }
    else if(sum >= 80) {
        cout << "The student score A"; 
    }
    else if(sum >= 75) {
        cout << "The student score B+";
    }
    else if(sum >= 60) {
        cout << "The student score B"; 
    }
    else if(sum >= 55) {
        cout << "The student score C+"; 
    }
    else if(sum >= 45) {
        cout << "The student score C"; 
    }
    else if(sum >= 30) {
        cout << "The student score D"; 
    }
    else {
        cout << "The student score F";   
    }
cout << "\nWould you like to calculate for another student? (q to quit else another charachter to continue): ";
        cin >> quitChoice;
    }while(quitChoice=='c' || quitChoice=='C');

    return 0;
}
