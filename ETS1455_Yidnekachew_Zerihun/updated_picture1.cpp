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

        switch (menu){
        case 1:
        for(int j=1;j<=5;j++){
            for(int i=1;i<=5;i++){
                cout<<i<<" ";
            }
            cout<<endl;        
        }
        break;
        
        case 2:
        int num;
        cout<<"Please enter the number: ";
        cin>>num;
        for(int j=1;j<=num;j++) {
            for(int i=1;i<=num;i++) {
                cout<<i<<" ";
            }
        }
        break;

        case 0:
        cout<<"\nThe program is terminated! Thank you..."<<endl;
        return 0;

    }
    }
    

    EXIT_SUCCESS;
}
