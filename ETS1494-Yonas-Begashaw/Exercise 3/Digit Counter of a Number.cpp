#include <iostream>
using namespace std;
int main () {

int num, digit, result, counter=0;

cout << "Enter a number " << endl;
cin >> num;

while (num != 0) {

    digit = num % 10;
    
    num = num / 10;
    
    counter ++;
}

cout << "The number has " << counter << " digits.";

return 0; 
}
