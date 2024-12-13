
#include <iostream>
using namespace std;
int main() {
// A B C D
int rows=4;
int columns=6;
char cap_letter='A';

 for(int i=1; i<=rows; i++){
     for(int j=1; j<=columns; j++){
         cout<<cap_letter<<" ";
         cap_letter++;
     }
     cout<<endl;
 }
  return 0;
}
