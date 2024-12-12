#include <iostream>
using namespace std;
int main () {

int num, digit, sum = 0, temp;

cout << "Enter your number " << endl;
cin >> num;
temp = num;

while(num != 0){

    int factorial =1;
    
    digit = num % 10;
    
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
    
    sum += factorial;
    num = num / 10;
}

if ( temp == sum) {
    cout << temp << " is a strong number." ;

}else {
    cout << temp << " isn't a strong number." ;
}  


    return 0;
}
