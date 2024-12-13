# Pseudocode for Student Grade Calculator Program

## Start Program

1. **Declare Variables:**
   - `Test`, `Quiz`, `Project`, `Assignment`, `Final_exam` (float type)
   - `sum` (float type)
   - `quitChoice` (char type)

2. **Start Loop for Repeated Calculations:**
   - **Prompt User for Assessment Inputs:**
     - `Test (15%)`: Input a value between 0 and 15.
     - `Quiz (5%)`: Input a value between 0 and 5.
     - `Project (20%)`: Input a value between 0 and 20.
     - `Assignment (10%)`: Input a value between 0 and 10.
     - `Final_exam (50%)`: Input a value between 0 and 50.
   - **Validate Inputs:**
     - If any input is invalid (not in the specified range), prompt the user again.

3. **Display Scores:**
   - Output the score for each assessment (Test, Quiz, Project, Assignment, Final_exam).

4. **Calculate Total Score:**
   - `sum = Test + Quiz + Project + Assignment + Final_exam`

5. **Determine Grade Based on Total Score:**
   - If `sum >= 90`: Grade = A+
   - If `sum >= 80`: Grade = A
   - If `sum >= 75`: Grade = B+
   - If `sum >= 60`: Grade = B
   - If `sum >= 55`: Grade = C+
   - If `sum >= 45`: Grade = C
   - If `sum >= 30`: Grade = D
   - Else: Grade = F

6. **Display Final Grade:**
   - Output the grade (A+, A, B+, etc.)

7. **Prompt User for Another Calculation:**
   - Ask if the user wants to calculate for another student.
   - If user enters 'y' or 'Y', repeat from Step 2.
   - Otherwise, terminate the program.

## End Program
