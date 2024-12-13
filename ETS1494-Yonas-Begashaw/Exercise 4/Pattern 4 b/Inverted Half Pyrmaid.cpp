#include <iostream>
using namespace std;
int main () {

int row;

cout << "Enter the number of rows" << endl;
cin >> row;


for (int i = row; i > 0; i--) {

    for (int j = 1; j <= i; j++ ) {

        cout << "*";
    }

    cout << endl;
    
}

    return 0;
}
