#include <iostream>
using namespace std;
int main () {

int size=5;

for (int i=1; i<= size; i++){

    char letter = 'A';

    for (int j=1; j <= i; j++){

        cout << letter ;
        letter ++;

    }

    cout << endl;
}

    return 0;
}
