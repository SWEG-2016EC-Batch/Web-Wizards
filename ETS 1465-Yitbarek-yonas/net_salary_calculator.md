# Pseudocode for Net Salary Calculator

## Initialization
1. Start.
2. Declare variables:
   - `worked_hour`, `basic_salary`, `bonusRate`, `gross_salary`, `tax`, `pension`, `net_salary`.
   - Constants: `pensionRate = 0.07`.
3. Declare `userInput` for user choice.

## Input Handling
4. **Repeat** the following steps until the user chooses to exit:
   - **Input Base Salary**:
     - Prompt the user to enter `basic_salary`.
     - Validate input. If invalid, prompt again.
   - **Input Worked Hours**:
     - Prompt the user to enter `worked_hour`.
     - Validate input. If invalid, prompt again.

## Bonus Calculation
5. If `worked_hour > 40`:
   - Prompt the user to enter `bonusRate` (between 0 and 1).
   - Validate input. If invalid, prompt again.
   - Calculate `bonus = worked_hour * bonusRate`.
6. Else, set `bonus = 0`.

## Salary Calculations
7. Calculate `gross_salary = basic_salary + bonus`.
8. Calculate `pension = basic_salary * pensionRate`.

## Tax Calculation
9. Determine `tax` based on `basic_salary` using the following brackets:
   - `<= 200`: `tax = 0`.
   - `200 < basic_salary <= 600`: `tax = gross_salary * 0.1`.
   - `600 < basic_salary <= 1200`: `tax = gross_salary * 0.15`.
   - `1200 < basic_salary <= 2000`: `tax = gross_salary * 0.2`.
   - `2000 < basic_salary <= 3500`: `tax = gross_salary * 0.25`.
   - `> 3500`: `tax = gross_salary * 0.35`.

## Final Calculation
10. Compute `net_salary = gross_salary - pension - tax`.
11. Display `net_salary`.

## User Continuation
12. Prompt the user:
    - Enter 'C' or 'c' to calculate for another person.
    - Enter any other key to exit.
13. If user chooses 'C' or 'c', repeat from step 4.

## End
14. Stop.
graph TD
    A[Start]
    B[Initialize variables: worked_hour, gross_salary, basic_salary, bonusRate, pensionRate, tax, bonus, pension, net_salary, userInput]
    C[Enter base salary]
    D{Invalid input?}
    E[Enter worked hours]
    F{Invalid input?}
    G{Worked hours > 40?}
    H[Enter bonus rate]
    I{Invalid input?}
    J[Calculate bonus = worked_hour * bonusRate]
    K[Calculate gross_salary = basic_salary + bonus]
    L[Calculate pension = basic_salary * pensionRate]
    M[Calculate tax based on salary brackets]
    N[Calculate net_salary = gross_salary - pension - tax]
    O[Output net payment]
    P{Continue calculation?}
    Q[End]

    A --> B
    B --> C
    C --> D
    D --> |Yes| C
    D --> |No| E
    E --> F
    F --> |Yes| E
    F --> |No| G
    G --> |No| K
    G --> |Yes| H
    H --> I
    I --> |Yes| H
    I --> |No| J
    J --> K
    K --> L
    L --> M
    M --> N
    N --> O
    O --> P
    P --> |Yes| C
    P --> |No| Q

