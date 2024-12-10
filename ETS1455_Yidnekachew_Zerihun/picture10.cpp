#include <iostream>
using namespace std;

int main(){
   
  for(int i=1;i<=5;i++){
      char a='A';
      for(int k=5-i;k>0;k--)
      cout<<" ";
      for(int j=1;j<=i;j++){
      cout<<" *";
     
      }
  cout<<endl;
  
  }
  return 0;
}
