# Pseudocode for Calculating BMI and Determining Weight Category

## Loop for multiple persons
- Repeat until user decides to stop:
  - Declare variables `weight`, `height`, `bmi`

  ## Read input values
  - Prompt user to enter `weight` in kilograms
  - Read `weight` from input
  - Prompt user to enter `height` in meters
  - Read `height` from input

  ## Calculate BMI using the formula:  
   BMI = weight / (height * height)

  ## Display the calculated BMI.

  ## Determine weight category
   - If BMI < 18 → Output: "Underweight"
   - If 18 <= BMI <= 25 → Output: "Normal weight"
   - If BMI > 25 → Output: "Overweight"

  ## Ask if the user wants to process another person
  - Prompt "Do you want to calculate BMI for another person? (0/any char)"
  - Read user choice
  - If choice is  '0',repeat the process  
  - if choice is  any other character,terminate the program
    - Exit loop
