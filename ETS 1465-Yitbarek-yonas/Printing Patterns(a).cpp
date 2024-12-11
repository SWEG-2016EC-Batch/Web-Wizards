/*This C++ program provides a menu-driven interface where users can select various patterns to display.
  After entering a valid choice between 1 to 12, the program generates the corresponding pattern,
  which can range from a hollow rectangle to pyramids with numbers or alphabets. If the user enters invalid input, the program asks for re-entry.
  After displaying the selected pattern, the program prompts the user to either continue or quit. 
  The program continues until the user option to continue by entering 'y' or 'Y'.*/
#include <iostream>
using namespace std;
int main() {
    int choice;
    char quitChoice;
    do {
        // Hardcoded values for rows and columns
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
        if (cin.fail() || choice > 12 || choice < 1) {
            cin.clear();  // Clear the error state caused by invalid input
            cin.ignore(1000, '\n');  // Discard any invalid characters in the input buffer
            cout << "It's an invalid input, please enter valid input!!\n";
            goto trial;
        }
 switch (choice) {
            case 1: // Hollow Rectangle
                for (int i = 1; i <= 7; i++) {
                    for (int j = 1; j <= 8; j++) {
                        if (i == 1 || j == 1 || i == 7 || j == 8) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;

            case 2: // Hollow Full Pyramid
                for (int i = 1; i <= 6; i++) {
                    for (int k = 6 - i; k > 0; k--)
                        cout << " ";
                    for (int j = 1; j <= (2 * i - 1); j++) {
                        if (j == 1 || j == (2 * i - 1) || i == 6) {
                            cout << "*";
                        } else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
                break;

            case 3: // Number Rectangle
                for (int i = 1; i <= 5; i++) {
                    for (int j = 1; j <= 5; j++) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;

            case 4: // Alphabet Rectangle
            {
                char letter = 'A';
                for (int i = 1; i <= 4; i++) {
                    for (int j = 1; j <= 6; j++) {
                        cout << letter << " ";
                        letter++;
                        if (letter > 'Z') letter = 'A'; // Loop back to 'A' if 'Z' is exceeded
                    }
                    cout << endl;
                }
            }
            break;

            case 5: // Lowercase Alphabet Rectangle
                for (int i = 1; i <= 5; i++) {
                    char letter = 'a';
                    for (int j = 1; j <= 5; j++) {
                        cout << letter << " ";
                        letter++;
                        if (letter > 'z') letter = 'a'; // Loop back to 'a' if 'z' is exceeded
                    }
                    cout << endl;
                }
                break;

            case 6: // Number Pyramid
                for (int i = 1; i <= 5; i++) {
                    for (int j = 1; j <= i; j++) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;

            case 7: // Descending Number Pyramid
                for (int i = 1; i <= 5; i++) {
                    int temp = i;
                    for (int k = 5 - i; k > 0; k--)
                        cout << " ";
                    for (int j = 1; j <= i; j++) {
                        cout << temp ;
                        temp--;
                    }
                    cout << endl;
                }
                break;

            case 8: // Alphabet Pyramid
                for (int i = 1; i <= 5; i++) {
                    char letter = 'A';
                    for (int j = 1; j <= i; j++) {
                        cout << letter << " ";
                        letter++;
                    }
                    cout << endl;
                }
                break;

            case 9: // Inverted Half Pyramid
                for (int i = 6; i >= 1; i--) {
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            case 10: // Hollow Inverted Half Pyramid
                for (int i = 6; i >= 1; i--) {
                    for (int j = 1; j <= i; j++) {
                        if (j == 1 || j == i || i == 6) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;

            case 11: // Full Pyramid
                for (int i = 1; i <= 6; i++) {
                    for (int k = 6 - i; k > 0; k--)
                        cout << " ";
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            case 12: // Inverted Number Pyramid
                for (int i = 6; i >= 1; i--) {
                    for (int k = 6 - i; k > 0; k--)
                        cout << " ";
                    for (int j = 1; j <= i; j++) {
                        cout <<"* ";
                    }
                    cout << endl;
                }
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
        
        // Ask the user if they want to continue or quit
        cout << "\nWould you like to calculate for another pattern? (q to quit, any other key to continue): ";
        cin >> quitChoice;

    } while (quitChoice == 'y' || quitChoice == 'y');  // Corrected condition with logical OR (||)

    return 0;
}
