# Pseudocode for Printing Patterns(a)

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
   Pseudo Code for Printing Patterns(b) Program

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
