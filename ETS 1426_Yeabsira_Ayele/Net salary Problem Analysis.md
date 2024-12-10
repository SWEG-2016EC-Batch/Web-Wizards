1.	Input
   o	Employee name
   o	Base salary
   o	Bonus rate per hour
   o	Weekly working hours
   o	Tax rate and pension rate
2.	Output
   o	Gross salary
   o	Bonus payment
   o	Income tax
   o	Pension amount
   o	Net salary
3.	Process
  o	Varaiable declaration: •
  o	gross_salary, net_salary, total_bonus_payment, pension_amount, and incomeTax as float types.
    weekly_working_hours, base_salary, and bonus_payment_per_hour as integer and float types for calculations.
     temp, temp1, temp2, and max_attempts as integer types to handle input validation.
  o	Defining the pension, bonus rate perhour and tax rate as constant
  o	Print input prompt message and corresponding input data to users
  o	Prompt for employee name, weekly working hours, and base salary.
  o	If the input is invalid, give the user 3 attempts
  o	If all attempts fail, terminate the program
  o	Checking if the weekly hours worked exceed 40 hours.
  o	If yes calculate bonus payement using formula:
  o	Bonus_payment=(weekly_working_hours - 40) * bonus_rate_per_hours * base salary; else there is no bonus payment
  o	calculate gross salary : gross_salary = base_salary + bonus_payment;
   calculate pension as 5% of the gross salary, and display it
   Calculate income tax 15% of the gross salary and display it
   Calculate net salary and display it using formula: net_salary = gross_salary - (pension_amount + incomeTax)
   Use loop for re-calculation of another person
  o	Ask if the user would like to calculate again
    If yes, repeat the process, else, terminate the program
