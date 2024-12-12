#include <iostream>
using namespace std;
int main () {

int size=5;

for (int i=1; i<= size; i++){

    char letter = 'a';

    for (int j=1; j <= size; j++){

        cout << letter;
        letter += 1;
    }

    cout << endl;
}

    return 0;
}
