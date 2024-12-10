#include <iostream>
using namespace std;
int main(){
  double transmission_per_second=960;
  long long file_size;
  double total_seconds;
  int temp=0;
  int maxAttempts=3;
  int again=1;
  /*A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long it will take to send a file, given the file size. */
while(again==1) {
// loop to get a valid input
  while(temp<maxAttempts){
        cout<<" Enter the file size in byte:"<<endl;
        cin>>file_size;
        if(cin.fail() || file_size<0) {
            cin.clear();
            cin.ignore();
            temp++;
            cout<<"Invalid input. You have "<<(maxAttempts-temp)<<" remaining chance"<<endl;
        }else {
           break; // Exit with an error code if all chances are used
        }
  }

   if (temp == maxAttempts) {
        cout << "You have used all your chances. Please try again later." << endl;
        return 1;
            }
//calculation
     total_seconds= file_size/transmission_per_second;
     int days= total_seconds /86400; //1 day= 86400 sec
        total_seconds -= days * 86400;

     int hours=total_seconds/3600; //1 hr=3600sec
        total_seconds -= hours * 3600;

     int minutes=total_seconds/60;
       total_seconds -= minutes * 60;
     float seconds=total_seconds;

     cout<<"The time to transmit the file is : "
          <<days<<" day(s), "<<hours<<" hour(s), "
          <<minutes<<" minute(s), and "
          <<seconds<<" seconds."<<endl;

    //Ask to continue or terminate
    cout << "Would you like to calculate for another file? Enter 1 for yes, 0 for no: ";
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
