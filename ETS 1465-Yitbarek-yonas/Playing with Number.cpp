/*This C++ program performs the following operations: Reverse the number, Swap first and last digits, Sum of first and last digits, 
  Check if number is palindrome, Frequency of digits, Check if number is strong, Check if number is perfect, Count number of digits, Product of even digits.
  The user can select from a menu of operations, and the program continuously runs until the user options to exit.*/
#include <iostream>
#include <iomanip>  
#include <cmath>   
using namespace std;
int main() {
    int choice, num, temp, rem, sum, rev = 0, rev1, rev2 = 0;
    int factorial, count, numDigits, firstDigit, lastDigit, swappedNumber;
    int product;
    bool foundEven;
    int middlePart;  
while (true) {
        cout << "\nSelect an option:\n";
        cout << "1. Reverse the number\n";
        cout << "2. Swap first and last digits\n";
        cout << "3. Sum of first and last digits\n";
        cout << "4. Check if number is palindrome\n";
        cout << "5. Frequency of digits\n";
        cout << "6. Check if number is strong\n";
        cout << "7. Check if number is perfect\n";
        cout << "8. Count number of digits\n";
        cout << "9. Product of even digits\n";
        cout << "0. Exit\n";
        trial:
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard invalid characters in the input buffer
            cout << "Invalid input, please enter a valid choice.\n";
            goto trial;
        }

        if (choice == 0) {
            break;  // Exit the program
        }

        cout << "Enter a number: ";
        cin >> num;
        temp = num;  // Store the original number for various calculations

        switch (choice) {
            case 1:  // Reverse the number
                rev = 0;  // Reset reverse number
                temp = num;  // Reset temp value
                while (temp > 0) {
                    rev1 = temp % 10;
                    rev = rev * 10 + rev1;
                    temp /= 10;
                }
                cout << "The number reversed: " << rev << endl;
                break;

            case 2:  // Swap first and last digits
                numDigits = 0;
                temp = num;
                while (temp != 0) {
                    temp /= 10;
                    numDigits++;
                }

                temp = num;
                lastDigit = num % 10;
                firstDigit = num;
                while (firstDigit >= 10) {
                    firstDigit /= 10;
                }

                middlePart = (num % (int)pow(10, numDigits - 1)) / 10;
                swappedNumber = lastDigit * pow(10, numDigits - 1) + middlePart * 10 + firstDigit;
                cout << "Number after swapping first and last digits: " << swappedNumber << endl;
                break;

            case 3:  // Sum of first and last digits
                lastDigit = num % 10;
                firstDigit = num;
                while (firstDigit >= 10) {
                    firstDigit /= 10;
                }
                sum = firstDigit + lastDigit;
                cout << "Sum of the first and last digits: " << sum << endl;
                break;

            case 4:  // Check if number is palindrome
                temp = num;
                rev2 = 0;  // Reset reversed number
                while (temp > 0) {
                    rev1 = temp % 10;
                    rev2 = rev2 * 10 + rev1;
                    temp /= 10;
                }
                if (num == rev2) {
                    cout << "The number is a palindrome.\n";
                } else {
                    cout << "The number is not a palindrome.\n";
                }
                break;
case 5:  // Frequency of digits
                cout << setw(10) << "Digit" << setw(15) << "Frequency" << endl;
                for (int digit = 0; digit <= 9; digit++) {
                    count = 0;
                    temp = num;
                    while (temp > 0) {
                        if (temp % 10 == digit) {
                            count++;
                        }
                        temp /= 10;
                    }
                    cout << setw(10) << digit << setw(15) << count << endl;
                }
                break;

            case 6:  // Check if number is strong
                temp = num;
                sum = 0;
                while (temp > 0) {
                    rem = temp % 10;
                    factorial = 1;
                    for (int i = 1; i <= rem; i++) {
                        factorial *= i;
                    }
                    sum += factorial;
                    temp /= 10;
                }
                if (sum == num) {
                    cout << "The number is strong.\n";
                } else {
                    cout << "The number is not strong.\n";
                }
                break;

            case 7:  // Check if number is perfect
                sum = 0;
                for (int i = 1; i <= (num / 2); i++) {
                    if (num % i == 0) {
                        sum += i;
                    }
                }
                if (sum == num) {
                    cout << "The number is perfect.\n";
                } else {
                    cout << "The number is not perfect.\n";
                }
                break;

            case 8:  // Count number of digits
                numDigits = 0;
                temp = num;
                while (temp != 0) {
                    temp /= 10;
                    numDigits++;
                }
                cout << "The number " << num << " has " << numDigits << " digits.\n";
                break;

            case 9:  // Product of even digits
                temp = num;
                product = 1;
                foundEven = false; // Flag to check if any even digit is found
                while (temp != 0) {
                    rem = temp % 10;
                    if (rem % 2 == 0) {
                        product *= rem;
                        foundEven = true;
                    }
                    temp /= 10;
                }
                if (foundEven) {
                    cout << "The product of even digits is: " << product << endl;
                } else {
                    cout << "No even digits found.\n";
                }
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
