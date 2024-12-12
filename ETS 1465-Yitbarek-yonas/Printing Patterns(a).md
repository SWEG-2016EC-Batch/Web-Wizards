# Pseudocode for Pattern Program

## Start Program

1. **Initialize Variables**
    - choice (int)
    - quitChoice (char)

2. **Display Menu**
    - Print the options (1 to 12 for different patterns)

3. **Input choice**
    - Prompt user to enter a choice (1-12)
    - If invalid input, prompt again until valid choice is entered

4. **Switch statement for different choices**
    - **Case 1: Hollow Rectangle**
        - Loop through rows (1 to 7)
            - Loop through columns (1 to 8)
                - Print `*` for borders and empty spaces for inside

    - **Case 2: Hollow Full Pyramid**
        - Loop through rows (1 to 6)
            - Print leading spaces
            - Print stars at borders and empty spaces inside

    - **Case 3: Number Rectangle**
        - Loop through rows (1 to 5)
            - Print numbers (1 to 5) for each row

    - **Case 4: Alphabet Rectangle**
        - Loop through rows (1 to 4)
            - Loop through columns (1 to 6)
                - Print alphabet (A-Z), cycling back to A after Z

    - **Case 5: Lowercase Alphabet Rectangle**
        - Loop through rows (1 to 5)
            - Print lowercase alphabet (a-z), cycling back to a after z

    - **Case 6: Number Pyramid**
        - Loop through rows (1 to 5)
            - Print numbers from 1 to current row number

    - **Case 7: Descending Number Pyramid**
        - Loop through rows (1 to 5)
            - Print leading spaces
            - Print descending numbers starting from the current row number

    - **Case 8: Alphabet Pyramid**
        - Loop through rows (1 to 5)
            - Print alphabets from A to current row number

    - **Case 9: Inverted Half Pyramid**
        - Loop through rows (6 to 1)
            - Print stars in decreasing order of columns

    - **Case 10: Hollow Inverted Half Pyramid**
        - Loop through rows (6 to 1)
            - Print stars at borders and empty spaces inside

    - **Case 11: Full Pyramid**
        - Loop through rows (1 to 6)
            - Print leading spaces
            - Print stars in increasing order

    - **Case 12: Inverted Number Pyramid**
        - Loop through rows (6 to 1)
            - Print leading spaces
            - Print numbers in decreasing order

5. **Ask user if they want to continue or quit**
    - Prompt user: "Would you like to calculate for another pattern? (y to  continue , any other key to quit )"
    - If user enters 'y', continue the  program, otherwise quit

6. **End Program**
 # FlowChart for Pattern Program
  ```mermaid
flowchart TD
    A[Start Program] --> B[Initialize Variables: choice, quitChoice]
    B --> C[Display Pattern Menu]
    C --> D[Input Choice]
    D --> E{Is Choice Valid?}
    E -->|No| D
    E -->|Yes| F[Process Choice Using Switch Statement]
    
    F --> G[Case 1: Hollow Rectangle]
    F --> H[Case 2: Hollow Full Pyramid]
    F --> I[Case 3: Number Rectangle]
    F --> J[Case 4: Alphabet Rectangle]
    F --> K[Case 5: Lowercase Alphabet Rectangle]
    F --> L[Case 6: Number Pyramid]
    F --> M[Case 7: Descending Number Pyramid]
    F --> N[Case 8: Alphabet Pyramid]
    F --> O[Case 9: Inverted Half Pyramid]
    F --> P[Case 10: Hollow Inverted Half Pyramid]
    F --> Q[Case 11: Full Pyramid]
    F --> R[Case 12: Inverted Number Pyramid]

    G --> S[Print Hollow Rectangle Pattern]
    H --> T[Print Hollow Full Pyramid Pattern]
    I --> U[Print Number Rectangle Pattern]
    J --> V[Print Alphabet Rectangle Pattern]
    K --> W[Print Lowercase Alphabet Rectangle Pattern]
    L --> X[Print Number Pyramid Pattern]
    M --> Y[Print Descending Number Pyramid Pattern]
    N --> Z[Print Alphabet Pyramid Pattern]
    O --> AA[Print Inverted Half Pyramid Pattern]
    P --> AB[Print Hollow Inverted Half Pyramid Pattern]
    Q --> AC[Print Full Pyramid Pattern]
    R --> AD[Print Inverted Number Pyramid Pattern]

    S --> AE[Ask if Continue or Quit]
    T --> AE
    U --> AE
    V --> AE
    W --> AE
    X --> AE
    Y --> AE
    Z --> AE
    AA --> AE
    AB --> AE
    AC --> AE
    AD --> AE

    AE -->|Quit| AF[End Program]
    AE -->|Continue| D
