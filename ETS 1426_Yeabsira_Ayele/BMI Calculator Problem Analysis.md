Problem analysis
1.	Input 
    	Weight from the user
    	Height from the user
    	Upto 3 attempts for valid height and weight inputs
2.	Output
   	Calculate display BMI
   	Display BMI category  
     Underweight (BMI < 18.5)
     Normal weight (BMI between 18.5 and 24.9)
     Overweight (BMI between 25 and 29.9)
     Obese (BMI >= 30)
  	Messages for invalid inputs
  	Exit messages
3.	Process/operation
   	Declare the variables: weight, height, BMI for input and output value
   	Initialize the variables such as attempts, maxAttempts, again for control and for repetition to calculate again or not and to make valid input
   	Prompt the user to input their weight.
      o	If the weight is invalid, show error message and reduce number of their attempts
      o	After 3 failed attempts, skip BMI calculation
  	If the weight is valid, ask the user to input the height. 
     o	  If the height is invalid, show error message and reduce number of their attempts
     o	  After 3 failed attempts, skip BMI calculation
  	Once both weight and height inputs are valid, calculate BMI.
  	Use formula :   BMI=weight/(height * height) to calculate BMI
  	Display the BMI value and categorize to the user
  	Use a loop to allow continuous BMI calculation as long as the user wants.
  	Ask the user if they want to calculat BMI again (1 to continue, 0 to terminate).
  	if no, terminate the program.
