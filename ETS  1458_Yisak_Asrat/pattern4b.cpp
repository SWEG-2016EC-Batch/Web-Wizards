      #include <iostream>
      #include <cmath>
      #include <limits>

      using namespace std;

      int main() {

      line1:
          cout << "\nPlease choose one of the following to get patterns\n";
          cout << "\n #1 if you want to get consecutive numbers in row and column. Enter 1\n ";
          cout << "\n #2 if you want to get a series of letters in a row. Enter 2\n ";
          cout << "\n #3 if you want to get a left angle triangular pattern of numbers. Enter 3\n ";
          cout << "\n #4 if you want to get a right angle triangle pattern of numbers. Enter 4\n ";
          cout << "\n #5 if you want to get a left angle triangle pattern of letters. Enter 5\n ";
          cout << "\n #6 if you want to get letters in a series of row and column. Enter 6\n ";
          cout << "\n #7 if you want to get a hollow rectangle made of stars. Enter 7\n ";
          cout << "\n #8 if you want to get an inverted triangle of stars. Enter 8\n ";
          cout << "\n #9 if you want to get a hollow inverted right triangle with stars. Enter 9\n ";
          cout << "\n #10 if you want to get a pyramid made up of stars. Enter 10\n ";
          cout << "\n #11 if you want to get an inverted pyramid made up of stars. Enter 11\n ";
          cout << "\n #12 if you want to get a hollow  triangle with stars. Enter 12\n ";

        int number;
        cin >> number;

        cout << "Please enter the number of rows and columns respectively\n";
        int row, column;

        // Input validation block
        if (cin.fail()) {
        cout << "Please enter only numbers\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto line1;
        } else {
        cin >> row >> column;
        if (column < 0 || row < 0) {
        column = -1 * column;
        row = -1 * row;
        }
        }

        switch(number) {
        case 1:
        for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
        cout << j << "  ";
        }
        cout << endl;
        }
        break;

        case 2:{
        int increment = 0;
        for (char j = 'A'; j <= row - 1 + 'A'; j++) {
        cout << j << "  ";
        increment++;
        if (increment == 6) {
        cout << endl;
        increment = 0;
        }
        }}
        break;

        case 3:
        for (int j = 1; j <= row; j++) {
        for (int i = 1; i <= j; i++) {
        cout << i << "  ";
        }
        cout << endl;
        }
        break;

        case 4:
        for (int j = 1; j <= row; j++) {
        for (int a = row - j; a > 0; a--) {
        cout << "    ";
        }
        for (int i = j; i > 0; i--) {
        if (i < 10) {
        cout << i << "   ";
        } else {
        cout << i << "  ";
        }
        }
        cout << endl;
        }
        break;

        case 5:
        if (row < 63) {
        for (char j = 'A'; j <= row - 1 + 'A'; j++) {
        for (char i = 'A'; i <= j; i++) {
        cout << i << " ";
        }
        cout << endl;
        }
        }
        break;

        case 6:
        if (row < 30) {
        for (char j = 'a'; j <= row - 1 + 'a'; j++) {
        for (char i = 'a'; i <= 'a' + column; i++) {
        cout << i << " ";
        }
        cout << endl;
        }
        }
        break;

        case 7:
        for (int j = 1; j <= row; j++) {
        for (int i = 1; i <= column; i++) {
        if (i == 1 || i == column || j == 1 || j == row) {
        cout << " * ";
        } else {
        cout << "   ";
        }
        }
        cout << endl;
        }
        break;

        case 8:
        for (int j = row; j > 0; j--) {
        for (int a = j; a > 0; a--) {
        cout << " * ";
        }
        cout << endl;
        }
        break;

        case 9:
        for (int j = row; j > 0; j--) {
        for (int a = j; a > 0; a--) {
        if (j == row || j == 1 || a == 1 || a == j) {
        cout << " * ";
        } else {
        cout << "   ";
        }
        }
        cout << endl;
        }
        break;

        case 10:
        for (int j = 0; j <= row; j++) {
        for (int i = row - j; i > 0; i--) {
        cout << " ";
        }
        for (int a = j; a > 0; a--) {
        cout << "* ";
        }
        cout << endl;
        }
        break;

        case 11:
        for (int j = row; j > 0; j--) {
        for (int i = row - j; i > 0; i--) {
        cout << " ";
        }
        for (int a = j; a > 0; a--) {
        cout << "* ";
        }
        cout << endl;
        }
        break;

        case 12:
        for (int j = 1; j <= row; j++) {
        for (int i = row - j; i > 0; i--) {
        cout << " ";
        }
        for (int a = j; a > 0; a--) {
        if (j == 1 || j == row || a == 1 || a == j) {
        cout << "* ";
        } else {
        cout << "  ";
        }
        }
        cout << endl;
        }
        break;
        }

        return 0;
        }
