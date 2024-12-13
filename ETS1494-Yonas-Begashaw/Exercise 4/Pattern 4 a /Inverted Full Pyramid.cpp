#include <iostream>
using namespace std;
int main () {

int size = 6;

for(int i=size;i>=1;i--){

        for(int j=size;j>=1;j--){

            if(i>=j){
            cout<<"*"<<" ";

            }else{
              cout<<" ";
            }
            
        }cout<<endl;
    }

    return 0;
}
