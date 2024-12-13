#include <iostream>
using namespace std;
int main () {

int row, column;

cout << "Enter the number of rows" << endl;
cin >> row;

cout << "Enter the number of columns" << endl;
cin >> column;

for (int i=1; i<= row; i++){

    if ( i == 1 || i == row){

        for (int k = 1; k <= column; k++){

            cout << "*";

        }

    } else {

        for (int j=1; j <= column; j++){

            if ( j == 1 || j == column) {

                cout << "*";

            } else {
                cout << " ";
            }

        }

    }
    cout << endl;
}

    return 0;
}
