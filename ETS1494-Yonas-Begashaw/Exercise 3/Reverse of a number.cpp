#include <iostream>
using namespace std;
int main () {

int num, digit, result;

cout << "Enter a number " << endl;
cin >> num;

cout << "The reverse of " << num << " is ";

while (num != 0) {
    digit = num % 10;

    cout << digit ;
    
    num = num / 10;
}

return 0;
} 
