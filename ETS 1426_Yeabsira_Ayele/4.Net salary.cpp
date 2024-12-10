#include <iostream>                                                                                                                                   #include <iostream>
using namespace std;
               /*Design an algorithm and write a to read an employee name weekly working hours, 
               bonus rate per hour and base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,
                                       tax: 15%).*/
int main () {
    string Employee_name;
    int weekly_working_hours = 40; //Standard working hours per week, but it can be between 40-48
    int base_salary;
    float gross_salary=0.0;
    float net_salary=0.0,pension_amount, incomeTax, bonus_payment;
    float bonus_rate_per_hour=0.05; //its depend on a company payment, 
                                    //but i fixed as 5% of base salary

    float pensionRate = 0.05,taxRate = 0.15;
    int counter=0, temp=0, temp1=0, temp2=0;
    int max_attempts=2;
     int again=1;
     //to start the loop again
     while(again==1) {
   // 1. Input Employee Name
       cout<<" Enter your name:"<<endl;
       getline(cin, Employee_name);
   // 2. Input Bonus Rate per Hour
    while (temp2 < max_attempts) {
        cout << "Enter your weekly_working_hours: ";
        cin >> weekly_working_hours;  //it means the percent of your base salary per hour as a bonus
        if (cin.fail() || weekly_working_hours < 0) {  // Validate input for positive numbers
            cin.clear();
            cin.ignore(); // Clear input buffer
            temp2++;
            cout << "Invalid input. Please enter a positive bonus rate." << endl;
        } else {
            break;
        }
    }
    if (temp2 == max_attempts) {
        cout << "You have used all your chances. Please try again later." << endl;
        return 1;
    }
    // 3. Input Base Salary
    while(temp1<max_attempts){
     cout << "Enter your base_salary: " <<endl;
       cin >> base_salary;
               if ( cin.fail() || base_salary <= 0 ) {
                 cin.clear();
                 cin.ignore();
                 temp1++;
                 cout << "Invalid input. Please enter numbers only " <<endl;
            }else{
                break;
         }
      }
        if(max_attempts==temp1){
            cout << "You have used all your chances. Please try again later." << endl;
              return 1;
            }
    // 4. Calculate Overtime Bonus if applicable
    if ( weekly_working_hours > 40 ){
            bonus_payment=(weekly_working_hours - 40) * (bonus_rate_per_hour * base_salary);
        } else {
            bonus_payment=(weekly_working_hours - 40) * (0 * base_salary);
        }
        
      // 5. Calculate Gross Salary, Tax, Pension, and Net Salar
        gross_salary = base_salary + bonus_payment;
        incomeTax = gross_salary * taxRate;
        pension_amount= gross_salary * pensionRate;
        net_salary = gross_salary - (pension_amount + incomeTax);
       // Output results
        cout << "Gross Salary: $" << gross_salary << endl;
        cout << "Bonus Payment: $" << bonus_payment << endl;
        cout << "Income Tax: $" << incomeTax << endl;
        cout << "Pension: $" << pension_amount << endl;
            cout << " Your net salary is: $" << net_salary << " Thank you for your great work!" <<endl;

    //Ask to continue or terminate
         cout << "Would you like to calculate again? Enter 1 for yes, 0 for no: ";
         cin >> again;

    while (cin.fail() || (again != 0 && again != 1)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter 1 to continue or 0 to terminate: ";
            cin >> again;
    }
    cin.ignore(1000, '\n');
}
cout << "Program terminated." << endl;
    return 0;
}
