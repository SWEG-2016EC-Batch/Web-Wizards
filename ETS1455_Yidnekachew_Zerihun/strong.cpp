 #include <iostream>
 using namespace std;

 int main() {
      
  int num,temp,sum=0;
  cout<<"enter a number: ";
  cin>>num;

                
                for (int i = 1; i <= (num / 2); i++) {
                    if (num % i == 0) {
                        sum += i;
                    }
                }
                if (sum == num) {
                    cout << "The number is perfect.\n";
                } else {
                    cout << "The number is not perfect.\n";
                }
                
  }
