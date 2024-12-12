#include <iostream>
using namespace std;

int main () {

double test, quiz, project, assignment, final_exam, total;

cout << "Enter your test score out of 15 " << endl;
cin >> test;

cout << "Enter your quiz score out of 5 " << endl;
cin >> quiz;

cout << "Enter your project score out of 20 " << endl;
cin >> project;

cout << "Enter your assignment scorue out of 10 " << endl;
cin >> assignment;

cout << "Enter your final exam score out of 50 " << endl;
cin >> final_exam;

total = test + quiz + project + assignment + final_exam; 

cout << "Your total mark is " << total << " out of 100." << endl;

if (total >= 90 && total <= 100) {
    cout << "Your grade is A+" << endl;

} else if (total >= 80 && total < 90) {
    cout << "Your grade is A" << endl;

} else if (total >= 75 && total < 80) {
    cout << "Your grade is B+" << endl;

}else if (total >= 60 && total < 75) {
    cout << "Your grade is B" << endl;

}else if (total >= 55 && total < 60) {
    cout << "Your grade is C+" << endl;

} else if (total >= 45 && total < 55) {
    cout << "Your grade is C" << endl;

} else if (total >= 30 && total < 45) {
    cout << "Your grade is D" << endl;

} else if (total < 30) {
    cout << "Your grade is F" << endl;

}
