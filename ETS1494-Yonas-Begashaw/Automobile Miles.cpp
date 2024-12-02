#include <iostream>
using namespace std;
int main () {
  
double fuel_tank, miles_per_gallon, miles;

cout << "Enter the fuel tank capacity in gallons" << endl;
cin >> fuel_tank;
cout << "Enter the miles per gallon" << endl;
cin >> miles_per_gallon;
  
miles = miles_per_gallon * fuel_tank;
  
cout << "The number of miles the automobile can be driven without refueling is " << miles;
  
return 0;
}
