#include <iostream>
using namespace std;
int main () {

int size = 5;

for (int i = size; i > 0; i--) {

    if ( i == size ) {

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
