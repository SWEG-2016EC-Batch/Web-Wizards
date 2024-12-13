// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

int num, reversed_num, last_digit; 
int count, again = 1, max_attempts = 3;

while ( again == 1) {
  count = 0;
 while (count < max_attempts){
    cout<<"Enter the number"<<endl;
    cin>>num;
    if ( cin.fail() || num < 0 ) {
         cin.clear();
         cin.ignore();
          count++;
        cout << "Please enter number only. You have remaiing "<<max_attempts - count<<" chances." <<endl;
            }else{
                break;
         }
      }
       if(max_attempts == count){
          cout << "You have used all your chances. Please try again later." << endl;
              return 1;
            }

int original_num = num;
  
  while (num != 0){
      last_digit = num % 10;
      reversed_num = reversed_num * 10 + last_digit;
      num /= 10;
  }
 
 if (original_num == reversed_num){
     cout<<"The number "<<original_num<<" is a palindrome."<<endl;
 } else {
    cout<<"The number "<<original_num<<" is not a palindrome."<<endl; 
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
