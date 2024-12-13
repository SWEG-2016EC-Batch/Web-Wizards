#include <iostream>
using namespace std;
int main () {

int size = 6;

for (int i = 1; i <=size; i++) {

        for (int j = 1; j <= size + i - 1; j++) {

            if (j <= size - i) {
                cout << " ";

            }else if (j == size - i + 1 || j == size + i - 1 || i == size){
                cout << "*"; } else {
                    cout << " ";
                }
                
        } cout<<endl;
        }

    return 0;
}
