# Pseudocode for Calculating BMI and Determining Weight Category

Start

1. Loop for multiple persons
- Repeat until user decides to stop:
  - Declare variables `weight`, `height`, `bmi`

2. Read input values
  - Prompt user to enter `weight` in kilograms
  - Read `weight` from input
  - Prompt user to enter `height` in meters
  - Read `height` from input
  - If the weight >= 0 amd height > 0 goto step 3

3. Calculate BMI using the formula:  
   BMI = weight / (height * height)

4. Display the calculated BMI.

5. Determine weight category
   - If BMI < 18 → Output: "Underweight"
   - If 18 <= BMI <= 25 → Output: "Normal weight"
   - If BMI > 25 → Output: "Overweight"

6. Ask if the user wants to process another person
  - If choice is  '0',repeat the process  
  - if choice is  any other character,terminate the program
    - Exit loop
