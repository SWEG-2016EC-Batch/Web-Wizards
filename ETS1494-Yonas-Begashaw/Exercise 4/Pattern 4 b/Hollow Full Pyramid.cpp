#include <iostream>
using namespace std;
int main () {

int row;

cout << "Enter the number of rows" << endl;
cin >> row;

for (int i = 1; i <=row; i++) {

        for (int j = 1; j <= row + i - 1; j++) {

            if (j <= row - i) {
                cout << " ";

            }else if (j == row - i + 1 || j == row + i - 1 || i == row){
                cout << "*"; } else {
                    cout << " ";
                }
                
        } cout<<endl;
        }

    return 0;
}
