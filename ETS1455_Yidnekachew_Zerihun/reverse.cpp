#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;

    cout << "Enter an integer: ";
    cin >> number;

    while (number != 0) {
        int remainder = number % 10;       // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Append it to the reversed number
        number /= 10;                      // Remove the last digit from the original number
    }

    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
