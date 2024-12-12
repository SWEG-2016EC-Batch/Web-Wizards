/*This C++ code is an updated version of printing pattern(a).cpp that enables users to generate different patterns based on their input.
  It prompts the user to select a pattern (ranging from hollow rectangles to pyramids), then asks for the number of rows, columns, and the character to print.
  The program includes error handling for invalid inputs and provides a choice to either continue generating patterns or quit by pressing 'q'.*/
#include <iostream>
using namespace std;
int main() {
    int choice, rows, cols;
    char ch;
    char quitChoice;
 do {
        cout << "Enter a number to select a pattern:" << endl;
        cout << "1. Hollow Rectangle" << endl;
        cout << "2. Hollow Full Pyramid" << endl;
        cout << "3. Number Rectangle" << endl;
        cout << "4. Alphabet Rectangle" << endl;
        cout << "5. Lowercase Alphabet Rectangle" << endl;
        cout << "6. Number Pyramid" << endl;
        cout << "7. Descending Number Pyramid" << endl;
        cout << "8. Alphabet Pyramid" << endl;
        cout << "9. Inverted Half Pyramid" << endl;
        cout << "10. Hollow Inverted Half Pyramid" << endl;
        cout << "11. Full Pyramid" << endl;
        cout << "12. Inverted Number Pyramid" << endl;
 trial:
        cout << "Enter your choice (1-12): ";
        cin >> choice;
        if (cin.fail()||choice < 1||choice > 12) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial;
        }
 trial1:
        cout << "Enter the number of rows: ";
        cin >> rows;
        if (cin.fail()) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial1;
        }
trial2:
        cout << "Enter the number of columns: ";
        cin >> cols;
        if (cin.fail()) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer up to 1000 characters or until a newline is encountered
            cout << "It's invalid input, please enter valid input!!\n";
            goto trial2;
        }
 if(choice == 1||choice == 2 ||choice == 9||choice == 10||choice == 11||choice == 12) {
            cout << "Enter the character to be used: ";
            cin >> ch;
        }
 switch(choice) {
            case 1: // Hollow Rectangle
                for(int i = 1; i <= rows; i++) {
                    for(int j = 1; j <= cols; j++) {
                        if(i == 1||j == 1||i == rows||j == cols) {
                            cout << ch << " ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
case 2: // Hollow Full Pyramid
                for(int i = 1; i <= rows; i++) {
                    for(int k = rows - i; k > 0; k--) 
                        cout << " ";
                    for(int j = 1; j <= (2*i-1); j++) {
                        if(j == 1||j == (2*i-1)||i == rows) {
                            cout << ch;
                        } else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
                break;

            case 3: // Number Rectangle
                for(int i = 1; i <= rows; i++) {
                    for(int j = 1; j <= cols; j++) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;
case 4: // Alphabet Rectangle
                {
                    char letter = 'A';
                    for(int i = 1; i <= rows; i++) {
                        for(int j = 1; j <= cols; j++) {
                            cout << letter << " ";
                            letter++;
                            if(letter > 'Z') letter = 'A'; // Loop back to 'A' if 'Z' is exceeded
                        }
                        cout << endl;
                    }
                }
                break;

            case 5: // Lowercase Alphabet Rectangle
                for(int i = 1; i <= rows; i++) {
                    char letter = 'a';
                    for(int j = 1; j <= cols; j++) {
                        cout << letter << " ";
                        letter++;
                        if(letter > 'z') letter = 'a'; // Loop back to 'a' if 'z' is exceeded
                    }
                    cout << endl;
                }
                break;

            case 6: // Number Pyramid
                for(int i = 1; i <= rows; i++) {
                    for(int j = 1; j <= i; j++) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;

            case 7: // Descending Number Pyramid
                for(int i = 1; i <= rows; i++) {
                    int temp = i;
                    for(int k = rows - i; k > 0; k--) 
                        cout << " ";
                    for(int j = 1; j <= i; j++) {
                        cout << temp << " ";
                        temp--;
                    }
                    cout << endl;
                }
                break;

            case 8: // Alphabet Pyramid
                for(int i = 1; i <= rows; i++) {
                    char letter = 'A';
                    for(int j = 1; j <= i; j++) {
                        cout << letter << " ";
                        letter++;
                    }
                    cout << endl;
                }
                break;

            case 9: // Inverted Half Pyramid
                for(int i = rows; i >= 1; i--) {
                    for(int j = 1; j <= i; j++) {
                        cout << ch << " ";
                    }
                    cout << endl;
                }
                break;

            case 10: // Hollow Inverted Half Pyramid
                for(int i = rows; i >= 1; i--) {
                    for(int j = 1; j <= i; j++) {
                        if(j == 1||j == i||i == rows) {
                            cout << ch << " ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;

            case 11: // Full Pyramid
                for(int i = 1; i <= rows; i++) {
                    for(int k = rows - i; k > 0; k--) 
                        cout << " ";
                    for(int j = 1; j <= (2*i-1); j++) {
                        cout << ch;
                    }
                    cout << endl;
                }
                break;

            case 12: // Inverted Number Pyramid
                for(int i = rows; i >= 1; i--) {
                    for(int k = rows - i; k > 0; k--) 
                        cout << " ";
                    for(int j = 1; j <= i; j++) {
                        cout << ch << " ";
                    }
                    cout << endl;
                }
                break;

            default: 
                cout << "Invalid choice!" << endl;
        }

        // Prompt the user to either quit or continue
        cout << "Would you like to try another pattern? (q to quit else another charachter to continue): ";
        cin >> quitChoice;

    } while(quitChoice != 'q' && quitChoice != 'Q');  

    cout << "Thank you for using the pattern generator!" << endl;

    return 0;
}
