#include <iostream>
using namespace std;

int main() {
      
  int num,rem,factorial=1,sum=0;
  cout<<"enter a number: ";
  cin>>num;
  int temp = num;
                
                while (temp > 0) {
                    rem = temp % 10;
                    
                    for (int i = 1; i <= rem; i++) {
                        factorial *= i;
                    }
                    sum += factorial;
                    temp /= 10;
                }
                if (sum == num) {
                    cout << "The number is strong.\n";
                } else {
                    cout << "The number is not strong.\n";
                }
                return 0;
  }
