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
    for(int j=5;j>=1;j--){
        for(int i=5-j;i>=1;i--){
            cout<<" ";
            }    
            for(int k=j;k>=1;k--){
            cout<<"* ";
            }
        cout<<endl;
    }
        break;
        
        case 2:
       int num;
    cout<<"enter number: ";
    cin>>num;
    for(int j=num;j>=1;j--){
        for(int i=num-j;i>=1;i--){
            cout<<" ";
            }    
            for(int k=j;k>=1;k--){
            cout<<"* ";
            }
        cout<<endl;
    }

        break;

        case 0:
        cout<<"\nThe program is terminated! Thank you..."<<endl;
        return 0;

    }
    }
    

    EXIT_SUCCESS;
}
