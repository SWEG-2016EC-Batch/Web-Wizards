#include <iostream>
using namespace std;
int main () {

int row;

cout << "Enter the number of rows" << endl;
cin >> row;

for(int i=row; i>=1; i--){

        for(int j=row; j>=1; j--){

            if(i>=j){
              cout<<"*"<<" ";

            }else{
              cout<<" ";
            }
            
        }cout<<endl;
    }

    return 0;
}