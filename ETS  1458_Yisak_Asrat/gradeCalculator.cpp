#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float test = 0, quiz = 0, project = 0, assignment = 0, finalExam = 0, sum = 0;
    string grade;

    line10:
    cout << "\nPlease enter the test mark from 15%: ";
    cin >> test;

    if (cin.fail()) {
        cout << "\nPlease enter only a number.\n";
        cin.clear();  
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        goto line10;
    } else {
        if (test > 15 || test<0) {
            cout << "\nPlease enter a number between greterthan or equal to 0 and less thean or equal to 15.\n";
            goto line10;
        }
    }

    line24:
    cout << "\nPlease enter the quiz mark from 5%: ";
    cin >> quiz;

    if (cin.fail()) {
        cout << "\nPlease enter only a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto line24;
    } else {
        if (quiz > 5 && quiz <0) {
            cout << "\nPlease enter a number between greterthan or equal to 0 and less thean or equal to 5.\n";
            goto line24;
        }
    }

    line30:
    cout << "\nPlease enter the project mark from 20%: ";
    cin >> project;

    if (cin.fail()) {
        cout << "\nPlease enter only a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto line30;
    } else {
        if (project > 20 && project <0) {
            cout << "\nPlease enter a number between greterthan or equal to 0 and less thean or equal to 20.\n";
            goto line30;
        }
    }

    line40:
    cout << "\nPlease enter the assignment mark from 10%: ";
    cin >> assignment;

    if (cin.fail()) {
        cout << "\nPlease enter only a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto line40;
    } else {
        if (assignment > 10 && assignment <0) {
            cout << "\nPlease enter a number between greterthan or equal to 0 and less thean or equal to 10.\n";
            goto line40;
        }
    }

    line50:
    cout << "\nPlease enter the final exam mark from 50%: ";
    cin >> finalExam;

    if (cin.fail()) {
        cout << "\nPlease enter only a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto line50;
    } else {
        if (finalExam > 50 && finalExam <0) {
            cout << "\nPlease enter a number between greterthan or equal to 0 and less thean or equal to 50.\n";
            goto line50;
        }
    }

    sum = finalExam + assignment + project + quiz + test;

    if (sum >= 90) {
        grade = "A+";
    } else if (sum >= 80 && sum < 90) {
        grade = "A";
    } else if (sum >= 75 && sum < 80) {
        grade = "B+";
    } else if (sum >= 60 && sum < 75) {
        grade = "B";
    } else if (sum >= 55 && sum < 60) {
        grade = "C+";
    } else if (sum >= 45 && sum < 55) {
        grade = "C";
    } else if (sum >= 30 && sum < 45) {
        grade = "D";
    } else {
        grade = "F";
    }

    cout << "\nThe test mark from 15% is " << test << endl;
    cout << "The quiz mark from 5% is " << quiz << endl;
    cout << "The project mark from 20% is " << project << endl;
    cout << "The assignment mark from 10% is " << assignment << endl;
    cout << "The final exam mark from 50% is " << finalExam << endl;
    cout << "\nThe final sum of the marks is " << sum << endl;
    cout << "The final grade is " << grade << endl;

    return 0;
}
