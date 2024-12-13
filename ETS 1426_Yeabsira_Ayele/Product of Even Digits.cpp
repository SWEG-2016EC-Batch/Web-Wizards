
#include <iostream>
using namespace std;
int main() {
 
  int num, product=1, last_digit;
  bool even_digit = true;
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
        cout << "Please enter numbers only. You have remaiing "<<max_attempts - count<<" chances." <<endl;
            }else{
                break;
         }
      }
       if(max_attempts == count){
          cout << "You have used all your chances. Please try again later." << endl;
              return 1;
            }
 while(num != 0){
     int last_digit = num % 10;
     num = num / 10;
     
     if (last_digit % 2 == 0){
         product *= last_digit;
         even_digit = true;
     }
 }
  if(even_digit) {
  cout<<"The product of even digits is : "<<product<<endl; 
  } else {
      cout<<"There is no even digit in the number."<<endl;
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
