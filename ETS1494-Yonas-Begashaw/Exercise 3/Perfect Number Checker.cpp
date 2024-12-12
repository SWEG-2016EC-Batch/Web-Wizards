#include <iostream>
using namespace std;

int main () {

int num, sum=0;

cout << "Enter your number " << endl;
cin >> num;

for (int i = 1; i <= num; i++) {
    
    if (num % i == 0) {
        sum += i;
    }
}

if (sum - num == num) {
    cout << num << " is a perfect number." ;

} else {
    cout << num << " isn't a perfect number.";
}

    return 0;
}
