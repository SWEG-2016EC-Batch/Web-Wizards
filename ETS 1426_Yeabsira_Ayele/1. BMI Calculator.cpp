#include <iostream>
using namespace std;
int main() {
    double weight, height, BMI, attempts;
    int again = 1;
    const int maxAttempts = 3; // Maximum number of invalid input attempts
  
  while (again == 1) {    //again to calculate
        attempts = 0;
        //Input weight with remaining attempts
        do {
            cout << "Enter your weight (kg): ";
            cin >> weight;
            if (cin.fail() || weight <= 0) {
                cin.clear(); cin.ignore(1000, '\n');
                attempts++;
                cout << "Invalid weight. You have " << (maxAttempts - attempts) << " attempts left.\n";
            }
        } while ((cin.fail() || weight <= 0) && attempts < maxAttempts);

        if (attempts == maxAttempts) {
            cout << "You have used all attempts for weight. Skipping BMI calculation.\n";
        } else {
            attempts = 0;

            // Input height with remaining attempts
            do {
                cout << "Enter your height (m): ";
                cin >> height;
                if (cin.fail() || height <= 0) {
                    cin.clear(); cin.ignore(1000, '\n');
                    attempts++;
                cout << "Invalid height. You have " << (maxAttempts - attempts) << " attempts left.\n";
                }
            } while ((cin.fail() || height <= 0) && attempts < maxAttempts);

            if (attempts == maxAttempts) {
                cout << "You have used all attempts for height. Skipping BMI calculation.\n";
            } else {
                BMI = weight / (height * height);
                cout << "Your BMI is: " << BMI << endl;
                if (BMI<18.5){
                    cout<<"You are underweight"<<endl;
                }
                else if (BMI>=18.5 && BMI<=24.9){
                 cout<<"You have a normal weight"<<endl;  
                }
                else if(BMI>=25 && BMI<=29.9){
                 cout<<"You are overweight"<<endl;
                }
            else if (BMI>=30){
                cout<<"You are obese"<<endl;
            }
                }
        }
        // Ask to continue or terminate
        cout << "Calculate again? 1: Yes, 0: No: ";
        cin >> again;

        while (cin.fail() || (again != 0 && again != 1)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter 1 to continue or 0 to terminate: ";
            cin >> again;
        }
    }
    if(again==0){
        cout<<"Program terminated. Thankyou! ";
    }
    return 0;
}

