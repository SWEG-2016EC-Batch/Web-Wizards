#include <iostream>
using namespace std;
int main () {

int num, digit, result, product=1;

cout << "Enter a number " << endl;
cin >> num;

while (num != 0) {
    digit = num % 10;

    if (digit % 2 == 0) {
        product *= digit;
    }
    
    num = num / 10;
}

cout << "The product of the even digits is " << product;
return 0;
} 
