# Pseudocode for Student Grade Calculator

## Initialization
1. Start.
2. Declare variables:
   - `Test`, `Quiz`, `Project`, `Assignment`, `Final_exam` (float for assessment scores).
   - `sum` (float to store the total score).
   - `quitChoice` (character for user choice).

## Input Handling
3. **Repeat** the following steps until the user chooses to quit:
   - Prompt the user to enter scores for:
     - `Test` (15%), `Quiz` (5%), `Project` (20%), `Assignment` (10%), `Final_exam` (50%).
   - Store the values in respective variables.

## Grade Calculation
4. Calculate `sum = Test + Quiz + Project + Assignment + Final_exam`.
5. **Determine Grade Based on Total Score**:
   - If `sum >= 90`: Output "The student scored A+".
   - Else if `sum >= 80`: Output "The student scored A".
   - Else if `sum >= 75`: Output "The student scored B+".
   - Else if `sum >= 60`: Output "The student scored B".
   - Else if `sum >= 55`: Output "The student scored C+".
   - Else if `sum >= 45`: Output "The student scored C".
   - Else if `sum >= 30`: Output "The student scored D".
   - Else: Output "The student scored F".

## User Continuation
6. Prompt the user:
   - Enter 'q' or 'Q' to quit.
   - Enter any other character to calculate for another student.

## Loop Condition
7. If the user chooses 'q' or 'Q', exit the loop. Otherwise, repeat from step 3.

## End
8. Stop.
   ```mermaid
   graph TD
    A[Start] --> B[Declare Variables]
    B --> C[Prompt for Assessment Scores]
    C --> D{Are Scores Valid?}
    D -- No --> C
    D -- Yes --> E[Calculate Total Score]
    E --> F{Total Score >= 90?}
    F -- Yes --> G[Grade: A+]
    F -- No --> H{Total Score >= 80?}
    H -- Yes --> I[Grade: A]
    H -- No --> J{Total Score >= 75?}
    J -- Yes --> K[Grade: B+]
    J -- No --> L{Total Score >= 60?}
    L -- Yes --> M[Grade: B]
    L -- No --> N{Total Score >= 55?}
    N -- Yes --> O[Grade: C+]
    N -- No --> P{Total Score >= 45?}
    P -- Yes --> Q[Grade: C]
    P -- No --> R{Total Score >= 30?}
    R -- Yes --> S[Grade: D]
    R -- No --> T[Grade: F]
    G --> U[Display Grade]
    I --> U
    K --> U
    M --> U
    O --> U
    Q --> U
    S --> U
    T --> U
    U --> V[Prompt User to Continue or Quit]
    V --> W{User Chooses to Quit?}
    W -- No --> C
    W -- Yes --> X[Stop]

