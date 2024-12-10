#include <iostream>
using namespace std;

int main() {
    char print='A';
    for(int j=1;j<=5;j++){
        for(int i=1;i<=5;i++){
            cout<<print++<<" ";
        }cout<<endl;
    }


    return 0;
}
