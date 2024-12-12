/*This C++ program calculates a student's final grade based on weighted assessments, including a test (15%), quiz (5%), project (20%), assignment (10%), and final exam (50%). 
It validates user input for each assessment, ensuring that the values are within specified ranges. After collecting the data, it computes the total score and assigns a grade (A+, A, B+, etc.) based on the sum. 
The user can repeat the process for multiple students by choosing to continue or terminate the program.*/
#include <iostream>
using namespace std;
int main() {
         char quitChoice;
    do{
    float Test, Quiz, Project, Assignment, Final_exam, sum = 0;
 trial:
        cout << "Enter the student Assesment  Test 15%: ";
       cin >> Test ;
        if (cin.fail()||Test<0||Test>15) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial;
        }
        trial1:
        cout << "Enter the student Assesment  Quiz 5%: ";
       cin >> Quiz ;
        if (cin.fail()||Quiz<0||Quiz>5) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial1;
        }
        trial2:
        cout << "Enter the student Assesment Project 20%: ";
       cin >> Project ;
        if (cin.fail()|| Project<0|| Project>20) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial2;
        }
        trial3:
        cout << "Enter the student Assesment Assignment 10%: ";
       cin >>  Assignment;
        if (cin.fail()||Assignment<0|| Assignment>10) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial3;
        }
 trial5:
        cout << "Enter the student Assesment Final exam 50%: ";
       cin >>  Final_exam ;
        if (cin.fail()||Final_exam<0|| Final_exam>50) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial5;
        }
        cout<<"The student get "<< Test<<" out of 15\n";
        cout<<"The student get "<< Quiz<<" out of 5\n";
        cout<<"The student get "<< Project<<" out of 20\n";
        cout<<"The student get "<< Assignment<<" out of 10\n";
          cout<<"The student get "<<  Final_exam<<" out of 50\n";
        
        
        
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
cout << "\nWould you like to calculate for another student? (upper or lower 'y'to continue else teminate for other input): ";
        cin >> quitChoice;
    }while(quitChoice =='y' || quitChoice =='Y');

    return 0;
}
