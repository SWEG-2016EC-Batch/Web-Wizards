
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    char user_choice ;
    long int num;
    line8:
    cout<<"enter the number: ";
    cin>>num;
     if(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"invalid input,insert only positive number: "<<endl;
        goto line8;
    }
    cout<<"press 'a': to get the reverse of the number."<<endl;
    cout<<"press 'b': to count amount the digits ."<<endl;
    cout<<"press 'c': to get the product of even digits."<<endl;
    cout<<"press 'd': to get first & last digits & their sum."<<endl;
    cout<<"press 'e': to swap the first & last digits."<<endl;
    cout<<"press 'f': to check if a number is palindrome. "<<endl;
    cout<<"press 'g': to get the frequency of each digit."<<endl;
    cout<<"press 'h': to check if a number is strong ."<<endl;
    cout<<"press 'i': to check if a number is perfect."<<endl;
    cout<<"press 0 : if you want to change the number : "<<endl;
    do{
    long int remainder=0,product=1,number_of_digits=0;
    long int first_digit,last_digit,first_last_reverse,reverse_number,sum;
    // if (user_choice == 'n'){
    //     cout<<"press 'a': to know "
    // }
    long int temp = num;
    long int temp2 = temp;
    long int temp1,temp6,temp7,counter=0,digits=0,reverse=0;

    char choice;
    line25:
    cout<<"enter symbol (a-i) ";
    cin>>choice;
    if(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"invalid input,only insert 'a-h' character: "<<endl;
        goto line25;
    }
    temp1=num;
    while(temp1>0){
        remainder = temp1 % 10;
        number_of_digits++;
        temp1 /= 10;
    }
    switch(choice){
    // to get the product of the even digits of the number
    case 'a':digits = number_of_digits,reverse=0;
    while (temp2>0){
        remainder = temp2%10;
        reverse += remainder*pow(10,digits);
        temp2 /= 10;
        digits--;
    }cout<<"the reverse of "<<temp<<" is: "<<reverse/10<<endl;
    break;

    // to count the number of digits
    case 'b':
      cout<<"the number of digits in "<<temp<<" is: "<<number_of_digits<<endl;
    break;
    // to get the reverse of the user input number
    case 'c':
     while(temp2>0){
        remainder = temp2 % 10;
        if (remainder % 2 == 0){
            product *=remainder;
        }
        temp2 /= 10;
    }
    cout<<"the product of even digits of "<<temp<<" is: "<<product<<endl;
    break;
    case 'd':
    // to print the first and last digits and to sum up them
    first_digit=0,last_digit=0;
    counter = 1;
    remainder = 0;
    while(temp2 > 0){
        remainder = temp2 % 10;
        if (counter == 1){
            last_digit = remainder;
        }else if(counter == number_of_digits){
            first_digit = remainder;
        }
        temp2 /= 10;
        counter++;
    }cout<<"the first digit of "<<temp<<" is :"<<first_digit<<endl;
    cout<<"the last digit of "<<temp<<" is :"<<last_digit<<endl;
    cout<<"the sum of the first and last digit of "<<temp<<" is: "<<first_digit+last_digit<<endl;
    break;
    case 'e':
    // to get the number that is the first digit and last of digit of the number is swapped
    digits = (number_of_digits-1);
    counter=0;
    first_last_reverse=0;
    while(temp2>0) {
        if (counter == 0) {
            remainder = temp2%10;
            first_last_reverse += remainder*pow(10,digits);
            temp2/=10;
            counter++;
            continue;
        }else if(counter < number_of_digits-1) {
            remainder = temp2%10;
            first_last_reverse+=remainder*pow(10,counter);
        }else {
            remainder = temp2%10;
            first_last_reverse+=remainder;
        }
        digits--;
        counter++;
        temp2 /= 10;
    }cout<<"the swap of first and last digits of "<<temp<<" is: "<<first_last_reverse<<endl;
    break;
    case 'f':
    // to know whether a number is a palindrome or not

    digits = number_of_digits,remainder = 0,reverse=0;
    while(temp2>0){
        remainder = temp2 % 10;
        reverse += remainder*pow(10,digits);
        temp2/=10;
        digits--;
    } reverse_number = reverse / 10;
    if(reverse_number == temp){
        cout<<temp<<" is a palindrome! "<<endl;
    }else{
        cout<<temp<<" is not a palindrome! "<<endl;
    }
    break;
    case 'g':
    // to know the frequency of each digits in a given number

    remainder=0;
    while(temp2>0){
        remainder = temp2%10;
        long int temp6 = temp,remainder1=0;
        counter = 1;
        while(temp6>0){
            remainder1 = temp6%10;
            if(remainder == remainder1){
                counter++;
            } temp6/=10;
        }cout<<": "<<remainder<<" : "<<counter-1<<" :"<<endl;
        temp2/=10;
    }
    break;
    case 'h':
    // to get the sum of the factorial of the digits of a number

    sum = 0;
    while(temp2>0){
        remainder = temp2%10;
        int digitFactorial = 1;
        for(int i=1;i<=remainder;remainder--){
            digitFactorial *= remainder;
        }sum += digitFactorial;
        temp2 /= 10;
    }if(temp==sum){
        cout<<temp<<" is a strong number. "<<endl;
    }else{
        cout<<temp<<" is not strong number."<<endl;
    }
    break;
    case 'i':

    // to check if a number is a perfect number or not
    long int divisor_sum=0,perfectNumber;
    for(int i=1;i<=temp;i++){
        if(temp7%i==0){
            divisor_sum += i;
        }
    }perfectNumber = divisor_sum - temp;
    if(perfectNumber == temp)
    cout<<temp<<" is a perfect number."<<endl;
    else
    cout<<temp<<" is not a perfect number."<<endl;
    break;
    }
    cout<<"do you want to continue?(y/n): ";
    cin>>user_choice;
    if(user_choice == '0'){
        line193:
        cout<<"you want to change the number. Enter a new number: ";
        cin>>num;
    }
    if(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"invalid input,insert only positive number: "<<endl;
        goto line193;
    }
    }while(user_choice == 'y'||user_choice=='0');
    return 0;
}

