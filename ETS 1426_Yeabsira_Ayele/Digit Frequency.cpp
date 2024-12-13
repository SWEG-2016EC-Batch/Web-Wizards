
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 
long long num;
int last_digit; 
 int digit_frequency [10] = {0};
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
while (num != 0){
    last_digit = num % 10;
    digit_frequency [last_digit]++;
    num /= 10;
}
  cout<<"Digit | Frequency" <<endl;
  for(int i = 0; i < 10; i++){
      if (digit_frequency [i] > 0){
          cout<<" "<< i << "    | "<<digit_frequency[i] <<endl;
      }
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
