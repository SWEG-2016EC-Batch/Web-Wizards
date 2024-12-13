#include <iostream>
using namespace std;
int main () {

int row;

cout << "Enter the number of rows" << endl;
cin >> row;

for (int i=1; i<= row; i++){

    for (int k = row - i; k > 0; k--){
            
            cout << " " ;
    }

    for (int j=i; j > 0; j--){
    
                cout << j ;
    }

    cout << endl;
    
}

    return 0;
}
