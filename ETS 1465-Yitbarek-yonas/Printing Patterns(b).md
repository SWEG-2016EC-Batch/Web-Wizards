# Pseudo Code for Printing Patterns(b) Program

## Start of Program

1. **Initialize Variables**  
   - `choice`: Integer to store the user's choice of pattern.
   - `rows`: Integer to store the number of rows for the pattern.
   - `cols`: Integer to store the number of columns for the pattern.
   - `ch`: Character to store the user-selected character for printing.
   - `quitChoice`: Character to store whether the user wants to quit or continue.

2. **Loop to Keep Generating Patterns**
   - Display a menu with pattern options:
     1. Hollow Rectangle
     2. Hollow Full Pyramid
     3. Number Rectangle
     4. Alphabet Rectangle
     5. Lowercase Alphabet Rectangle
     6. Number Pyramid
     7. Descending Number Pyramid
     8. Alphabet Pyramid
     9. Inverted Half Pyramid
     10. Hollow Inverted Half Pyramid
     11. Full Pyramid
     12. Inverted Number Pyramid

   - Prompt the user to select a pattern choice (1 to 12).
   - **Input Validation**: Ensure the choice is between 1 and 12. If not, show an error message and re-prompt.

3. **Input for Rows and Columns**
   - Prompt the user to enter the number of rows.
   - **Input Validation**: Ensure valid integer input for rows.
   - Prompt the user to enter the number of columns.
   - **Input Validation**: Ensure valid integer input for columns.

4. **Input for Character (if applicable)**
   - If the selected pattern requires a character (e.g., Hollow Rectangle, Pyramids), prompt the user to enter the character.

5. **Generate the Selected Pattern**
   - Use a `switch` statement to handle different patterns:
     - **Case 1: Hollow Rectangle**
       - Loop through rows and columns.
       - Print `ch` at the borders, and spaces inside.
     - **Case 2: Hollow Full Pyramid**
       - Loop through rows and columns to form a hollow pyramid.
     - **Case 3: Number Rectangle**
       - Print numbers in a rectangular shape based on rows and columns.
     - **Case 4: Alphabet Rectangle**
       - Print uppercase letters in a rectangle, looping back to 'A' if necessary.
     - **Case 5: Lowercase Alphabet Rectangle**
       - Print lowercase letters in a rectangle, looping back to 'a' if necessary.
     - **Case 6: Number Pyramid**
       - Print numbers in a pyramid shape.
     - **Case 7: Descending Number Pyramid**
       - Print numbers in a descending pyramid shape.
     - **Case 8: Alphabet Pyramid**
       - Print letters in a pyramid shape.
     - **Case 9: Inverted Half Pyramid**
       - Print an inverted half pyramid using the character `ch`.
     - **Case 10: Hollow Inverted Half Pyramid**
       - Print an inverted half pyramid with borders only, using the character `ch`.
     - **Case 11: Full Pyramid**
       - Print a full pyramid using the character `ch`.
     - **Case 12: Inverted Number Pyramid**
       - Print an inverted pyramid of numbers.

6. **Prompt for Continuation**
   - Ask the user if they want to try another pattern or quit:
     - If the user presses 'q', exit the program.
     - Otherwise, continue to generate more patterns.

7. **End of Program**
   - Display a thank you message when the user quits.

## End of Program
# FlowChart for Printing Patterns(b) Program
```mermaid
flowchart TD
    A[Start] --> B[Initialize Variables: choice, rows, cols, ch, quitChoice]
    B --> C[Display Pattern Menu]
    C --> D[Prompt User for Pattern Choice]
    D --> E{Valid Choice?}
    E -- No --> D
    E -- Yes --> F[Input Validation for Rows and Columns]
    F --> G{Valid Input?}
    G -- No --> F
    G -- Yes --> H{Pattern Requires Character?}
    H -- Yes --> I[Prompt User for Character]
    I --> J[Switch on Pattern Choice]
    H -- No --> J
    J --> K[Generate Hollow Rectangle Pattern]
    J --> L[Generate Hollow Full Pyramid Pattern]
    J --> M[Generate Number Rectangle Pattern]
    J --> N[Generate Alphabet Rectangle Pattern]
    J --> O[Generate Lowercase Alphabet Rectangle Pattern]
    J --> P[Generate Number Pyramid Pattern]
    J --> Q[Generate Descending Number Pyramid Pattern]
    J --> R[Generate Alphabet Pyramid Pattern]
    J --> S[Generate Inverted Half Pyramid Pattern]
    J --> T[Generate Hollow Inverted Half Pyramid Pattern]
    J --> U[Generate Full Pyramid Pattern]
    J --> V[Generate Inverted Number Pyramid Pattern]
    K --> W[Pattern Generated]
    L --> W
    M --> W
    N --> W
    O --> W
    P --> W
    Q --> W
    R --> W
    S --> W
    T --> W
    U --> W
    V --> W
    W --> X[Ask User to Continue or Quit]
    X --> Y{Quit?}
    Y -- Yes --> Z[End Program]
    Y -- No --> C
    Z --> AA[Thank You Message]
    AA --> A
