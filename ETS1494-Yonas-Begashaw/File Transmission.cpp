#include <iostream>
using namespace std;

int main () {
int file_size, speed=960 , days, hours, minutes, seconds, time;
cout << "Enter file size in bytes " << endl;
cin >> file_size;

time = file_size / speed;
days = time / 86400;
time = time % 86400;
hours = time / 3600;
time = time % 3600;
minutes = time / 60;
time = time % 60;
seconds = time;

cout << "The total time it takes is " ;
cout << days << " days, " ;
cout <<hours <<" hours, " ;
cout <<minutes << " minutes, and " ;
cout << seconds << " seconds. " ;


return 0;
}
