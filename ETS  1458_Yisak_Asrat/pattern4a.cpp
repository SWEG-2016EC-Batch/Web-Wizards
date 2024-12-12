#include <iostream>
#include <cmath>

using namespace std;

int main() {


for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cout << j<<"  ";
    
}
cout <<endl;

}//answer for a

cout <<endl<<endl<<endl;



int increment=0;

    for(char j='A';j<='X';j++){
        cout << j<<"  ";
        
    increment++;
    if(increment==6){
        cout <<endl;
        increment=0;
    }
}//answer for b
cout <<endl<<endl<<endl;


for(int j=1;j<=5;j++){
   for(int i=1;i<=j;i++){
        cout << i<<"  ";
    
}
cout <<endl;
    
}//answer for c

cout <<endl<<endl<<endl;
for(int j=1;j<=5;j++){
    
     for (int a = 5 - j; a > 0; a--) {
            cout << "    ";  
        }

        for (int i = j; i > 0; i--) {
            if (i < 10) {
                cout << i << "   "; 
            } else {
                cout << i << "  ";   
            }
        }
    


cout <<endl;
    
}//answer for d
cout <<endl<<endl<<endl;
for(char j='A';j<='E';j++){

   for(char i='A';i<=j;i++){
        cout << i<<" ";
    
}
cout <<endl;
    
}//answer for e
cout <<endl<<endl<<endl;

for(char j='a';j<='e';j++){

   for(char i='a';i<='e';i++){
        cout << i<<" ";
    
}
cout <<endl;
    
}//answer for f

cout <<endl<<endl<<endl;


for(int j=1;j<=7;j++){
  
   for(int i=1;i<=8;i++){
    if(i==1 || i==8 || j==1 ||j==7){
     cout <<" * ";
    }
    else{
        cout <<"   ";
    }
   
    
}
cout <<endl;
    
}//answer for g
cout <<endl<<endl<<endl;
for(int j=6;j>0;j--){

  for(int a=j;a>0;a--){

  cout <<" * ";
}
cout <<endl;
    
}//answer for h
cout <<endl<<endl<<endl;
for(int j=6;j>0;j--){

  for(int a=j;a>0;a--){
    if(j==6 || j==1 || a==1 || a==j){
  cout <<" * ";
    }
    else{
        cout <<"   ";
    }


}
cout <<endl;
    
}//answer for i
cout <<endl<<endl<<endl;

for(int j=0;j<=6;j++){
  for(int i=6-j;i>0;i--){
cout <<" ";
}
  for(int a=j;a>0;a--){
cout <<"* ";

}
cout <<endl;
    
}//answer for j
cout <<endl<<endl<<endl;
for(int j=6;j>0;j--){
  for(int i=6-j;i>0;i--){
cout <<" ";
}
  for(int a=j;a>0;a--){
cout <<"* ";

}
cout <<endl;
    
}//answer for k
cout <<endl<<endl<<endl;

for(int j=1;j<=6;j++){
  for(int i=6-j;i>0;i--){
cout <<" ";
}
  for(int a=j;a>0;a--){
    if(j==1 ||j==6 || a==1 ||a==j){
cout <<"* ";
    }
    else{
        cout <<"  ";
    }


}
cout <<endl;
    
}//answer for L

    



    return 0;
}
