#include <iostream>
 #include <cmath>
 using namespace std;
 int main() {

     int num,temp,sumDigits,numDigits=0,lastDigit,firstDigit,middlePart,swappedNumber;
   
     cout<<"enter a number: ";
     cin>>num;
   
     sumDigits = 0;
                temp = num;
   
                while (temp != 0) {
                    temp /= 10;
                    numDigits++;
                }

                 temp = num;
                lastDigit = num % 10;
                firstDigit = num;
                while (firstDigit >= 10) {
                    firstDigit /= 10;
                }

                middlePart = (num % (int)pow(10, numDigits - 1)) / 10;
                swappedNumber = lastDigit * pow(10, numDigits - 1) + middlePart * 10 + firstDigit;
                cout << "Number after swapping first and last digits: " << swappedNumber << endl;
 }
