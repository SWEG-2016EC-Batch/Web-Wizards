#include <iostream>
#include <string>
using namespace std;
int main() {
 
 double test, quiz, project, assignment, final_exam;
 int count, temp, temp1, temp2, temp3, again = 1, max_attempts = 3;
 
  while(again==1) {
   temp1 = 0;
 while(temp1<max_attempts){
    cout<< "Enter your Test rsult out of 15: "<<endl;
     cin>>test;
    if ( cin.fail() || test < 0 || test >15 ) {
         cin.clear();
         cin.ignore();
          temp1++;
        cout << "Please enter valid number only. You have remaiing "<<max_attempts - temp1<<" chances." <<endl;
            }else{
                break;
         }
      }
       if(max_attempts==temp1){
          cout << "You have used all your chances. Please try again later." << endl;
              return 1;
            }
 count = 0;
   while(count < max_attempts){
    cout<<"Enter your Quiz rsult out of 5: \n";
     cin>>quiz;
    if ( cin.fail() || quiz < 0 || quiz > 5 ) {
         cin.clear();
         cin.ignore();
         count++;
        cout << "Please enter valid number only. You have remaiing "<<max_attempts - count<<" chances." <<endl;
            }else{
                break;
         }
      }
       if(max_attempts==count){
          cout << "You have used all your chances. Please try again later." << endl;
              return 1;
            }
 temp = 0;
   while(temp<max_attempts){
     cout<<"Enter your Project rsult out of 20: "<<endl;
      cin>>project;
    if ( cin.fail() || project < 0 || project > 20) {
         cin.clear();
         cin.ignore();
         temp++;
        cout << "Please enter valid number only. You have remaiing "<<max_attempts - temp<<" chances." <<endl;
            }else{
                break;
         }
      }
       if(max_attempts== temp){
          cout << "You have used all your chances. Please try again later." << endl;
              return 1;
            }
 
  temp2 = 0;
   while(temp2 <max_attempts){
      cout<<"Enter your Assignment rsult out of 10: "<<endl;
      cin>>assignment;
    if ( cin.fail() || assignment < 0 || assignment > 10 ) {
         cin.clear();
         cin.ignore();
         temp2++;
        cout << "Please enter valid number only. You have remaiing "<<max_attempts - temp2<<" chances." <<endl;
            }else{
                break;
         }
      }
       if(max_attempts== temp2){
          cout << "You have used all your chances. Please try again later." << endl;
              return 1;
            }
 temp3 = 0;
   while(temp3 <max_attempts){
       cout<<"Enter you Final exam rsult out of 50: "<<endl;
       cin>>final_exam;
    if ( cin.fail() || final_exam < 0 || final_exam > 50  ) {
         cin.clear();
         cin.ignore();
         temp++;
        cout << "Please enter valid number only. You have remaiing "<<max_attempts - temp3<<" chances." <<endl;
            }else{
                break;
         }
      }
       if(max_attempts== temp3){
          cout << "You have used all your chances. Please try again later." << endl;
              return 1;
            }
 
 double total_mark= test + quiz + project + assignment + final_exam;
 cout<<"Your total mark is: "<<total_mark<<endl;
 string grade;   //to handle multi character
    
   if(total_mark >= 90){
        grade = "A+";
   } else if (total_mark >=80){
       grade = 'A';
   } else if (total_mark >= 75){
       grade = "B+";
   } else if (total_mark >= 60){
       grade = 'B';
   } else if (total_mark >= 55){
       grade = "C+";
   } else if (total_mark >= 45){
       grade = 'C';
   } else if (total_mark >= 30){
       grade = 'D';
   } else{
       grade = 'F';
   }
cout<<"Your grade is: "<<grade<<".\n";
    //Ask to continue or terminate
 cout << "Would you like to calculate again? Enter 1 for yes, 0 for no: ";
 cin >> again;
    while (cin.fail() || (again != 0 && again != 1)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter 1 to continue or 0 to terminate: ";
            cin >> again;
    }
}
  cout << "Program terminated." << endl;
    return 0;
}
