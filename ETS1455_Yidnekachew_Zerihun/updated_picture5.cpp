#include <iostream>
using namespace std;

int main() {
    int menu;
    while(true){
        cout<<"***** MENU*******"<<endl;
        cout<<"Press 1 to See example.\n";
        cout<<"Press 2 to do with ur dimension.\n";
        cout<<"Press 0 to terminate. \n";
        cin>>menu;
        char print='A';
        switch (menu){
        case 1:
        
    for(int i=1;i<=5;i++){
      char a='A';
      for(int j=1;j<=i;j++){
      cout<<a++<<" ";
  }cout<<endl;
  }
        break;
        
        case 2:
        int num;
    cout<<"enter a number: ";
    cin>>num;
  for(int i=1;i<=num;i++){
      char a='A';
      for(int j=1;j<=i;j++){
      cout<<a++<<" ";
  }cout<<endl;
  }

        break;

        case 0:
        cout<<"\nThe program is terminated! Thank you..."<<endl;
        return 0;

    }
    }
    

    EXIT_SUCCESS;
}
