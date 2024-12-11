# Pseudocode for Number Operations Program

## Initialization
1. Start.
2. Declare variables:
   - `choice`, `num`, `temp`, `rem`, `sum`, `rev`, `rev1`, `rev2`, `factorial`, `count`, `numDigits`, `firstDigit`, `lastDigit`, `swappedNumber`, `product`, `foundEven`, `middlePart`.

## Main Loop
3. **Repeat** until the user selects option 0 (exit):
   - Display a menu with the following options:
     1. Reverse the number
     2. Swap first and last digits
     3. Sum of first and last digits
     4. Check if number is palindrome
     5. Frequency of digits
     6. Check if number is strong
     7. Check if number is perfect
     8. Count number of digits
     9. Product of even digits
     0. Exit

4. Get the user's choice.
5. If the choice is invalid, prompt the user to re-enter.

## Case Handling for Each Option
6. **For each valid choice, perform the corresponding operation**:
   - **Option 1**: Reverse the number.
   - **Option 2**: Swap first and last digits.
   - **Option 3**: Calculate sum of the first and last digits.
   - **Option 4**: Check if the number is a palindrome.
   - **Option 5**: Display the frequency of each digit in the number.
   - **Option 6**: Check if the number is strong (sum of factorials of digits equals the number).
   - **Option 7**: Check if the number is perfect (sum of divisors equals the number).
   - **Option 8**: Count the number of digits.
   - **Option 9**: Calculate the product of the even digits.

## Exit Condition
7. If the user selects option 0, exit the program.
8. Otherwise, prompt for another input.

## End
9. Stop.
   # FlowChart for Number Operations Program 
    ```mermaid
    flowchart TD
    A[Start] --> B[Display Menu Options]
    B --> C[Get User Choice]
    C --> D{Valid Choice?}
    D -->|Yes| E[Enter Number]
    D -->|No| F[Display Invalid Input Message] --> C
    E --> G{Choice 1: Reverse the number?}
    G -->|Yes| H[Reverse the Number] --> B
    G -->|No| I{Choice 2: Swap first and last digits?}
    I -->|Yes| J[Swap Digits] --> B
    I -->|No| K{Choice 3: Sum of first and last digits?}
    K -->|Yes| L[Sum of First and Last Digits] --> B
    K -->|No| M{Choice 4: Palindrome?}
    M -->|Yes| N[Check if Palindrome] --> B
    M -->|No| O{Choice 5: Frequency of digits?}
    O -->|Yes| P[Display Frequency of Digits] --> B
    O -->|No| Q{Choice 6: Strong number?}
    Q -->|Yes| R[Check if Strong Number] --> B
    Q -->|No| S{Choice 7: Perfect number?}
    S -->|Yes| T[Check if Perfect Number] --> B
    S -->|No| U{Choice 8: Count digits?}
    U -->|Yes| V[Count Number of Digits] --> B
    U -->|No| W{Choice 9: Product of even digits?}
    W -->|Yes| X[Calculate Product of Even Digits] --> B
    W -->|No| Y[Exit Program] --> Z[End]

   

