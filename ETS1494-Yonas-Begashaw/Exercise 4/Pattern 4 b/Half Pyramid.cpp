#include <iostream>
using namespace std;
int main () {

int row, column;

cout << "Enter the number of rows" << endl;
cin >> row;

cout << "Enter the number of columns" << endl;
cin >> column;
char letter = 'A';

for (int i=1; i<= row; i++){

    for (int j=1; j <= column; j++){

        cout << letter;
        letter += 1;
    }

    cout << endl;
}

    return 0;
}
