#include <iostream>
using namespace std;
int main () {

int size=4;
char letter = 'A';

for (int i=1; i<= size; i++){

    for (int j=1; j <= 6; j++){

        cout << letter;
        letter += 1;
    }

    cout << endl;
}

    return 0;
}
