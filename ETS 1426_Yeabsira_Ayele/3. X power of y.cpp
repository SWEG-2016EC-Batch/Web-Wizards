#include <iostream>
#include <cmath>
using namespace std;
int main () {
// Write a program that find the result of the expression x the power of y where the value of X and Y are entered by the user.
   float x, y, result,choice,counter = 1;
  do {
     label:
       cout<<"The value of X: ";
       cin>>x;
    if ( cin.fail()) {
            cin.clear();
            cin.ignore();
            counter++;
        cout << " Invalid input. Please inter a number" <<endl;
        cout << " You have only one chance please try again." <<endl;
         if ( counter == 3) {
             cout << " You have completed your chance";
             break;
           }
           goto label;
         }
         
        int temp = 1;
        labely:
            cout<<"The value of y: ";
       cin>> y;
         if ( cin.fail()) {
            cin.clear();
            cin.ignore();
            temp++;
          cout << " Invalid input. Please inter a number" <<endl;
          cout << " You have only one chance please try again." <<endl;             
         if ( temp == 3) {
             cout << " You have finished your chance";
             break;
           }
           goto labely;
           cout << " The value you intered is invalid please inter number" <<endl;
                cout << " You have only one chance please try again!" <<endl;
         }
         else {           
            result=pow(x,y);
             cout<<"result: "<<result<<endl;
         }
         int var = 1;
        line46:
            cout << " Please inter 1 to continue or 0 to terminate"<<endl;
            cin >> choice;
                    
         if ( cin.fail() || (choice != 1 && choice != 0) ) {
                cin.clear();
                cin.ignore();
                  var++;
                    if ( var == 3 ) {
                   cout << " You are completed your chance ";
                        break;
                      }
                 cout << " Invalid input, you have only one chance Please inter valid input " <<endl; 
                               goto line46;                                                                    
                        }                  
      } while (choice == 1 );
 return 0;
}
