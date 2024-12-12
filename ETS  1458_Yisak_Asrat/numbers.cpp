#include <iostream>
#include <cmath>

using namespace std;

int main() {
line1:
cout <<"\nTo get number opration please choose on of the following choice\n\n";
cout <<"\n#1 to the reverses of the number please enter 1\n\n";
cout <<"\n#2 to the Counts the number of digits in a given number please enter 2\n\n";
cout <<"\n#3 to Find the product of even digits of the a given number please enter 3\n\n";
cout <<"\n#4 to get the first and the last digit of the number and find their sum please enter 4\n\n";
cout <<"\n#5 to Swap the first and the last digit of the number please enter 5\n\n";
cout <<"\n#6 to Check whether a number is palindrome or noter 6\n\n";
cout <<"\n#7 to Find the frequency of each digit in a given integer and print in table format 7\n\n";
cout <<"\n#8 to Check if a number is Strong or not 8\n\n";
cout <<"\n#9 to Check whether a number is Perfect number or not 9\n\n";


int input;
cin>>input;

if(input==1){
    line30:
    cout << "please enter the number you want to get its reverse\n";
int number,reminder=0,reverse=0,increment=0,even=1,first=0,last=0,sum=0,change=0,digit=1;
     cin>>number;
     if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line30;
}
else{
    if(number>=0){
      number=number;  
      
for(int i=number;i>0;i/=10){

   reminder= i%10;
   reverse= reverse*10 +reminder;
    number/=10;
}

cout <<"the reverse of number is "<< reverse<<endl; //answer for A
cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
}

    }
    else{
        number = -1 * number;
        
for(int i=number;i>0;i/=10){

   reminder= i%10;
   reverse= reverse*10 +reminder;
    number/=10;
}

cout <<"the reverse of number is "<< -1*reverse<<endl; //answer for A
cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
}

    }


}
}

else if(input==2){
        line45:
    cout << "\nplease enter the number you want to get numbers of digits\n";
    int number,reminder=0,reverse=0,increment=0,even=1,first=0,last=0,sum=0,change=0,digit=1;

     cin>>number;
     if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line45;
}
else{
     if(number>=0){
      number=number;  
    }
    else{
        number = -1 * number;
    }

for(int i=number;i>0;i/=10){
    increment++;


    number/=10;
}
cout << "the number of digits in number are "<<increment<<endl;
cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
}

}
}
else if(input==3){
      line69:
    cout << "\nplease enter the number you want to get the product of even digits\n";
    int number,reminder=0,reverse=0,increment=0,even=1,first=0,last=0,sum=0,change=0,digit=1;

     cin>>number;
     if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line69;
}
else{
     if(number>=0){
      number=number;  
    }
    else{
        number = -1 * number;
    }

for(int i=number;i>0;i/=10){
   reminder= i%10;
   if(reminder%2==0){
  even*=reminder;
   }
    number/=10;
}
cout <<"the product of even numbers are " <<even<<endl;
cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
}


}

}
else if(input==4){
        line95:
    cout << "\nplease enter the number you want to get the first and the last digit of the number and find their sum\n";
int number,reminder=0,reverse=0,increment=0,even=1,first=0,last=0,sum=0,change=0,digit=1;
     cin>>number;
     if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line95;
}
else{
     if(number>=0){
      number=number;  
    }
    else{
        number = -1 * number;
    }

last= number%10;
for(int i=number;i>0;i/=10){

   reminder= i%10;

    number/=10;
}

first = reminder;
sum= first+last;

cout  << "the first digit is: "<<first<<" and the last digit is: "<<last<<" and their sum is: "<<sum<<endl;
cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
}

}
}

else if(input==5){
      line125:
    cout << "\nplease enter the number you want to  Swap the first and the last digit of the number\n";
int number,reminder=0,reverse=0,increment=0,even=1,first=0,last=0,sum=0,change=0,digit=1;
     cin>>number;
     if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line125;
}
else{
 if(number>=0){
      number=number; 
      
int firstNumber =number;
last= number%10;
for(int i=number;i>0;i/=10){
  
    reminder= number%10;

     digit*=10;
    number/=10;
    
}
first=reminder;
int realDigit =digit/10;


change = last*realDigit +((firstNumber % realDigit)-last) +first;


cout << "the number which  changed the first and last digits is "<<change<<endl;//asnwer for e
cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
} 
    }
    else{
        number = -1 * number;
        
int firstNumber =number;
last= number%10;
for(int i=number;i>0;i/=10){
  
    reminder= number%10;

     digit*=10;
    number/=10;
    
}
first=reminder;
int realDigit =digit/10;


change = last*realDigit +((firstNumber % realDigit)-last) +first;


cout << "the number which  chagned the first and last digits is "<<-1*change<<endl;//asnwer for e
cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
}
    }


}}

else if(input==6){
        line289:
    cout << "\nplease enter the number you want to Check whether a number is palindrome or not\n";
    //palindrome numbers are number whose the reverse of the number is  equal to the origional number
int number,reminder=0,reverse=0,increment=0,even=1,first=0,last=0,sum=0,change=0,digit=1;
     cin>>number;
     if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line289;
}
else{
     if(number>=0){
      number=number;  
    }
    else{
        number = -1 * number;
    }

int origional = number;
for(int i=number;i>0;i/=10){

   reminder= i%10;
  reverse= reverse*10 +reminder;
    number/=10;
}
if(reverse==origional){
    cout << origional<< "  is palindrome number\n";
}
else{
    cout << origional<< "  is not palindrome number\n"; 
}


cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
}

}}
else if(input==7){
        line340:
    cout << "\nplease enter the number you want to get the frequency of each digit in a given integer and print in table format\n";
int number,reminder=0,reverse=0,increment=0,even=1,first=0,last=0,sum=0,change=0,digit=1,firstReminder=0;
     cin>>number;
     if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line340;
}
else{
     if(number>=0){
      number=number;  
    }
    else{
        number = -1 * number;
    }

int origional =number;
cout << "    |    " <<"digits" <<"  |  "<<"frequence"<<"  |  "<<endl;
for(int i=number;i>0;i/=10){
     firstReminder= i%10;
     number/=10;
     increment=0;
     int anotherOregional =origional;
    for(int j=anotherOregional;j>0;j/=10){

   reminder= j%10;
   if(firstReminder==reminder){
    increment++;
   }

    anotherOregional/=10;
}


cout << "    |       " <<firstReminder <<"    |     "<<increment<<"       |      "<<endl;

}


cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
}

}}

else if(input==8){
        line393:
    cout << "\nplease enter the number you want to Check if a number is Strong or not\n";
int number,reminder=0,reverse=0,increment=0,even=1,first=0,last=0,sum=0,change=0,digit=1,firstReminder=0,factorial=1;
     cin>>number;
     if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line393;
}
else{
     if(number>=0){
      number=number;  
    }
    else{
        number = -1 * number;
    }
int origional =number;
int anotherOrigional= number;
for(int i=number;i>0;i/=10){
    reminder=i%10;
    for(int i=reminder;i>0;i--){
    factorial*=i;
  
    }
   sum+=factorial;
    factorial=1;
     number/=10;

}
if(sum==anotherOrigional){
    cout << anotherOrigional<< " is strong number\n"<<endl;
}
else{
cout << anotherOrigional<< " is not strong number\n"<<endl;
}


cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
}

}}
else if(input==9){
        line444:
    cout << "\nplease enter the number you want to Check whether a number is Perfect number or not\n";
int number,reminder=0,reverse=0,increment=0,even=1,first=0,last=0,sum=0,change=0,digit=1,firstReminder=0,factorial=1;
     cin>>number;
     if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line444;
}
else{
     if(number>=0){
      number=number;  
    }
    else{
        number = -1 * number;
    }

for(int i=number;i>0;i--){

if(number%i==0){
    sum+=i;
  
}

}

if((sum-number)==number){
    cout<< number <<" is Perfect number "<<endl;
}
else{
     cout<< number <<" is not Perfect number "<<endl;
}

cout <<"\n\nif you want to go to main choose please enter 0 else enter 1 for exit\n";
int Main;
cin>>Main;
if(Main==0){
    goto line1;
}
else if(Main==1){
    return 0;
}

}}





return 0;
}
