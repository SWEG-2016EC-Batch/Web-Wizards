#include <iostream>
using namespace std;

int main() {
    int number, product = 1;

    cout << "Enter an integer: ";
    cin >> number;

    while (number != 0) {
        int remainder = number % 10;       // Get the last digit
        if (remainder%2==0){
            product*=remainder;
        }
        number /= 10;                      // Remove the last digit from the original number
    }

    cout << "the product of even digits is: " << product << endl;

    return 0;
}
