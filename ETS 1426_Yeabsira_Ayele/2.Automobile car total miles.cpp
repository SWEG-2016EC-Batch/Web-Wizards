#include <iostream>
using namespace std;

int main(){
    double numberOfGallons, milesPerGallon, totalMiles;
    int maxAttempts=3;
    int counter, temp;
    int again=1;
     
 while(again==1) {
    counter=0;
    temp=0;
    
// Loop for fuel tank capacity input
  while (counter < maxAttempts) {
    cout<<"Enter fuel tank capacity in gallons: "<<endl;
    cin>>numberOfGallons;
    
    if(cin.fail() || numberOfGallons<0) {
        cin.clear();
        cin.ignore();
        counter++;
        cout<<"Invalid input. You have "<<(maxAttempts-counter)<<" remaining chance"<<endl;
    } else{
       break;
    }
        if (counter == maxAttempts) {
        cout << "You have used all your chances. Please try again later." << endl;
        return 1;  // Exit with an error code if all chances are used
      }
  }
      // Loop for miles per gallon input
    while(temp<maxAttempts){
        cout<<"Enter the fuel efficiency in miles per gallon:"<<endl;
        cin>>milesPerGallon;
        if(cin.fail() || milesPerGallon<0) {
            cin.clear();
            cin.ignore();
            temp++;
            cout<<"Invalid input. You have "<<(maxAttempts-temp)<<" remaining chance"<<endl;
        }else {
           break; // Exit with an error code if all chances are used
        }
         if (temp == maxAttempts) {
        cout << "You have used all your chances. Please try again later." << endl;
        return 1;
            }
    }
    
    //calculate total miles 
    totalMiles = numberOfGallons * milesPerGallon;
    cout << "The automobile can be driven " << totalMiles << " miles without refueling." << endl;
    
    //Ask to continue or terminate
    cout << "Would you like to calculate for another automobile? Enter 1 for yes, 0 for no: ";
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
