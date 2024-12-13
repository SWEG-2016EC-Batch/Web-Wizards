#include <iostream>
using namespace std;
   
int main() {
    int number, reversedNumber = 0;

    cout << "Enter an integer: ";
    cin >> number;
  
    int temp=number;
  
    while (number != 0) {
        int remainder = number % 10;      
        reversedNumber = reversedNumber * 10 + remainder; 
        number /= 10;                     
    }

    cout << "Reversed number: " << reversedNumber<<endl;
    
    if(temp == reversedNumber){
        cout<<"it's palindrome!";
    }
    else{
        cout<<"it is not palindrome!";
    }
        
   
 return 0;
}
