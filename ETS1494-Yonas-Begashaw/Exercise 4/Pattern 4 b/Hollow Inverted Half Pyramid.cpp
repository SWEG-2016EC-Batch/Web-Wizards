#include <iostream>
using namespace std;
int main () {

int row;

cout << "Enter the number of rows" << endl;
cin >> row;

for (int i = row; i > 0; i--) {

    if ( i == row ) {

        for (int k = 1; k <= i; k++) {

            cout << "*";
        }
    } else {

        for (int j = 1; j <= i; j++ ) {

              if ( j == 1 or j == i) {

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
