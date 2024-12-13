#include <iostream>
using namespace std;
int main () {

int size=5;

for (int i=1; i<= size; i++){

    for (int k = size - i; k > 0; k--){
            
            cout << " " ;
    }

    for (int j=i; j > 0; j--){
    
                cout << j ;
    }

    cout << endl;
    
}

    return 0;
}
