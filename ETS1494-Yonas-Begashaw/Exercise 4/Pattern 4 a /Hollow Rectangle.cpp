#include <iostream>
using namespace std;
int main () {

int size=8;

for (int i=1; i<= size; i++){

    if ( i == 1 || i == size){

        for (int k = 1; k <= 8; k++){

            cout << "*";

        }

    } else {

        for (int j=1; j <= 8; j++){

            if ( j == 1 || j == 8) {

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
