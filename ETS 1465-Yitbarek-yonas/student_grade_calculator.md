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

   # FlowChart for Student Grade Calculator
   ```mermaid
flowchart TD
    A[Start Program] --> B[Declare Variables: Test, Quiz, Project, Assignment, Final_exam, sum, quitChoice]
    A --> C[Start Loop for Repeated Calculations]
    C --> D[Prompt User for Assessment Inputs]
    D --> E[Validate Inputs]
    E --> F[Display Scores for Each Assessment]
    F --> G[Calculate Total Score: sum = Test + Quiz + Project + Assignment + Final_exam]
    G --> H[Determine Grade Based on Total Score]
    H --> I[Display Final Grade]
    I --> J[Prompt User for Another Calculation]
    J --> K{Is User Done?}
    K -->|Yes| L[End Program]
    K -->|No| C

    %% Grade determination process
    H --> A1{sum >= 90}
    A1 -->|True| B1[Grade A+]
    A1 -->|False| A2{sum >= 80}
    A2 -->|True| B2[Grade A]
    A2 -->|False| A3{sum >= 75}
    A3 -->|True| B3[Grade B+]
    A3 -->|False| A4{sum >= 60}
    A4 -->|True| B4[Grade B]
    A4 -->|False| A5{sum >= 55}
    A5 -->|True| B5[Grade C+]
    A5 -->|False| A6{sum >= 45}
    A6 -->|True| B6[Grade C]
    A6 -->|False| A7{sum >= 30}
    A7 -->|True| B7[Grade D]
    A7 -->|False| B8[Grade F]



