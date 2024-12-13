#include <iostream>
using namespace std;
int main() {

int sum=0, num;

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

for (int i = 1; i < num; i++){
    if(num % i == 0){ //to find the divisors of a num
        sum += i;
    }
}
if(sum == num && num > 0){
    cout<<"The number "<<num<<" is a perfect number.\n";
} else {
    cout<<"The number "<<num<<" is not  a perfect number.\n";
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
