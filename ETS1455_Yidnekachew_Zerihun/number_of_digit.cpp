#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;
     int count=0;
    cout << "Enter an integer: ";
    cin >> number;
    
    while (number != 0) {
        int remainder = number % 10;       // Get the last digit
       count++;
        number /= 10;                      // Remove the last digit from the original number
    }

    cout << "number of digits are: " << count<< endl;

    return 0;
}
