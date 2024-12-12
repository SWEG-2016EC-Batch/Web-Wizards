#include <iostream>
using namespace std;
int main () {

int num, first, last, sum;

cout << "Enter a number " << endl;
cin >> num;

last = num % 10;
first = num;

while (first >= 10) {
    
    first = first / 10;
}

cout << "The first digit of the number " << num << " is " << first << ", and the last digit is " << last << endl;

sum = first + last;

cout << "The sum of the number's first and last digit is " << sum;

return 0;
}
