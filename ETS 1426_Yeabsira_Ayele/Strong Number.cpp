// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

int num, last_digit, temp;
int sum=0;
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
int temp=num; 

while(num > 0){
    last_digit = num % 10;
    int factorial = 1;
    
    for(int i = 1; i <= last_digit; i++){
        factorial *= i;
    }
    sum += factorial;
    num /= 10;
}

if(sum == temp){
    cout<<"The number "<<temp<<" is a strong number.\n";
} else {
    cout<<"The number "<<temp<<" is not  a strong number.\n";
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
