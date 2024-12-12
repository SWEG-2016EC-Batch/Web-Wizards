
#include <iostream>
using namespace std;
int main() {
    char letter='A',letter1='a';
     cout<<"press 1: if you want to see different pattern examples"<<endl;
     cout<<"press 2: if you want to input the size of the patterns to be drawn: "<<endl;
     int user_choice,num;
     cout<<"take choice from the user: ";
     cin>>user_choice;
    // to draw rectangle with digits
    switch(user_choice){

    case 1:

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
    cout<<"rectangle with digits"<<endl;
    cout<<"----------------------------"<<endl;
    // to draw rectangle with characters
    letter = 'A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++){
            cout<<letter<<" ";
            letter++;
        }cout<<endl;
    }
    cout<<"rectangle with characters"<<endl;
    cout<<"----------------------------"<<endl;
    // to draw right upward triangle
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
    cout<<"right upward triangle"<<endl;
    cout<<"----------------------------"<<endl;
    // normal left upward triangle with digits
    for(int i=1;i<=5;i++){
        for(int j=5;j>=1;j--){
            if(i>=j){
                cout<<j;
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<"left upward triangle with digits"<<endl;
    cout<<"----------------------------"<<endl;
    // normal half pyramid with letter
    letter1='a';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<letter1<<" ";
            letter1++;
        }letter1 ='a';
        cout<<endl;
    }
     cout<<"upward half pyramid with letter"<<endl;
    cout<<"----------------------------"<<endl;
    // rectangle pattern with letter
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<letter1<<" ";
            letter1++;
        }letter1 ='a';
        cout<<endl;
    }
    cout<<"rectangle pattern with letter"<<endl;
    cout<<"----------------------------"<<endl;
    // hallow rectangle
    for(int i=1;i<=7;i++){
        for(int j=1;j<=8;j++){
            if(i==1||i==7||j==1||j==8){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<"hallow rectangle"<<endl;
    cout<<"----------------------------"<<endl;
    // inverted half pyramid
    for(int i=6;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
    cout<<"inverted half pyramid"<<endl;
    cout<<"----------------------------"<<endl;
    // inverted hallow half pyramid
    for(int i=6;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(i==6||j==1||j==i){
            cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<"inverted hallow half pyramid"<<endl;
    cout<<"----------------------------"<<endl;
    // full pyramid
    for(int i=1;i<=6;i++){
        for(int j=6;j>=1;j--){
            if(i>=j){
            cout<<"*"<<" ";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<"full pyramid"<<endl;
    cout<<"----------------------------"<<endl;
    // inverted full pyramid
    for(int i=6;i>=1;i--){
        for(int j=6;j>=1;j--){
            if(i>=j){
            cout<<"*"<<" ";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<"inverted full pyramid"<<endl;
    cout<<"----------------------------"<<endl;

    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6 + i - 1; j++) {
            if (j <= 6 - i) {
                cout << " ";
            }else if (j == 6 - i + 1 || j == 6 + i - 1 || i == 6){
                cout << "*"; } else {
                    cout << " ";
                }
        } cout<<endl;
        }
    cout<<"upward hallow full pyramid"<<endl;
    cout<<"----------------------------"<<endl;
    break;


    case 2:

    cout<<"Enter the size of sides of a pattern: ";
    cin>>num;

    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
    cout<<"rectangle with digits"<<endl;
    cout<<"----------------------------"<<endl;
    // to draw rectangle with characters
    letter = 'A';
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<letter<<" ";
            letter++;
        }cout<<endl;
    }
    cout<<"rectangle with characters"<<endl;
    cout<<"----------------------------"<<endl;
    // to draw right upward triangle
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
    cout<<"right upward triangle"<<endl;
    cout<<"----------------------------"<<endl;
    // normal left upward triangle with digits
    for(int i=1;i<=num;i++){
        for(int j=num;j>=1;j--){
            if(i>=j){
                cout<<j;
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<"left upward triangle with digits"<<endl;
    cout<<"----------------------------"<<endl;
    // normal half pyramid with letter
    letter1='a';
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<letter1<<" ";
            letter1++;
        }letter1 ='a';
        cout<<endl;
    }
     cout<<"upward half pyramid with letter"<<endl;
    cout<<"----------------------------"<<endl;
    // rectangle pattern with letter
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<letter1<<" ";
            letter1++;
        }letter1 ='a';
        cout<<endl;
    }
    cout<<"rectangle pattern with letter"<<endl;
    cout<<"----------------------------"<<endl;
    // hallow rectangle
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==1||i==num||j==1||j==num){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<"hallow rectangle"<<endl;
    cout<<"----------------------------"<<endl;
    // inverted half pyramid
    for(int i=num;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
    cout<<"inverted half pyramid"<<endl;
    cout<<"----------------------------"<<endl;
    // inverted hallow half pyramid
    for(int i=num;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(i==num||j==1||j==i){
            cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<"inverted hallow half pyramid"<<endl;
    cout<<"----------------------------"<<endl;
    // full pyramid
    for(int i=1;i<=num;i++){
        for(int j=num;j>=1;j--){
            if(i>=j){
            cout<<"*"<<" ";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<"full pyramid"<<endl;
    cout<<"----------------------------"<<endl;
    // inverted full pyramid
    for(int i=num;i>=1;i--){
        for(int j=num;j>=1;j--){
            if(i>=j){
            cout<<"*"<<" ";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<"inverted full pyramid"<<endl;
    cout<<"----------------------------"<<endl;
    for (int i = 1; i <=num; i++) {
        for (int j = 1; j <= num + i - 1; j++) {
            if (j <= num - i) {
                cout << " ";
            }else if (j == num - i + 1 || j == num + i - 1 || i == num){
                cout << "*"; } else {
                    cout << " ";
                }
        } cout<<endl;
        }
    cout<<"upward hallow full pyramid"<<endl;
    cout<<"----------------------------"<<endl;
    break;
}
    return 0;
}

