#include <iostream>
using namespace std;
int main () {

int size = 5;

for (int i = size; i > 0; i--) {

    for (int j = 1; j <= i; j++ ) {

        cout << "*";
    }

    cout << endl;
    
}

    return 0;
}
