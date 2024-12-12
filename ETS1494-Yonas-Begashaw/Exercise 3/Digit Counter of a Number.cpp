#include <iostream>
using namespace std;
int main () {

int num, digit, result, counter=0, temp;

cout << "Enter a number " << endl;
cin >> num;

temp = num;

while (num != 0) {

    digit = num % 10;
    
    num = num / 10;
    
    counter ++;
}

cout << "The number " << temp << " has " << counter << " digits.";

return 0; 
}
