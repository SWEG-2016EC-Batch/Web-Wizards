// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 
 int rows, columns;
 int temp, count, again = 1, max_attempts = 3;
 
 while ( again == 1) {
 count = 0;
 while (count < max_attempts){
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    if ( cin.fail() || rows < 0 ) {
         cin.clear();
         cin.ignore();
          count++;
        cout << "Please enter numbers only. You have remaiing "<<max_attempts - count<<" chances." <<endl;
            }else{
                break;
         }
      }
       if(max_attempts == count){
          cout << "You have used all your chances. Please try again later." << endl;
              return 1;
            }
 temp = 0;
 while (temp < max_attempts){
    cout<<"Enter the number columns"<<endl;
    cin>>columns;
    if ( cin.fail() || columns < 0 ) {
         cin.clear();
         cin.ignore();
          temp++;
        cout << "Please enter numbers only. You have remaiing "<<max_attempts - temp<<" chances." <<endl;
            }else{
                break;
         }
      }
       if(max_attempts == count){
          cout << "You have used all your chances. Please try again later." << endl;
              return 1;
            }
 
 if(rows < 3 || columns <3){
     cout<<"You can't make a border with this row and column"<<endl;
     return 1;
 }
  for (int i=0; i<rows; i++){
      if(i==0 || i==rows - 1){
          for(int j=0; j<columns; j++){
              cout<<"* ";
             }
          } else{
              cout<<"* ";
              for(int j=1; j< columns - 1; j++){
                  cout<<"  ";
              }
            cout<<"* ";
          }
     cout<<endl;
  }
        //Ask to continue or terminate
cout << "Would you like to calculate again? Enter 1 for yes, 0 for no: ";
cin >> again;

  while (cin.fail() || (again != 0 && again != 1)) {
     cin.clear();
     cin.ignore();
     cout<<"Invalid input. Please enter 1 to continue or 0 to terminate: ";
            cin >> again;
    }
    cin.ignore();
}
cout << "Program terminated." << endl;
    return 0;
}
