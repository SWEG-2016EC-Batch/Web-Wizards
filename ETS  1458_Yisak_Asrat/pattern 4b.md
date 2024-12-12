### Step 1: Start ###

### Step 2: Ask for user input ###
- Display prompt: "Enter the number of row and column respectively that you want to get shapes."
- Read row and column values from user input
- If the user input is invalid (not numbers):
    - Display message: "Please enter only numbers"
    - Clear the error flag and ignore invalid input, then jump to "line1" (repeat input prompt)
- If row or column is negative:
    - Convert both row and column to their absolute values (make them positive)

### Step 3: Part a - Print numbers in a grid (row x column) ###
- For i = 1 to row:
    - For j = 1 to column:
        - Display value of j followed by two spaces
    - Move to the next line

### Step 4: Print extra newlines ###

### Step 5: Part b - Print alphabets from 'A' to the row-1 letter ###
- Initialize increment = 0
- For j = 'A' to (row-1 + 'A'):
    - Display the character j followed by two spaces
    - Increment the counter
    - If increment equals 6, move to the next line and reset increment to 0

### Step 6: Print extra newlines ###

### Step 7: Part c - Print numbers in an increasing pattern ###
- For j = 1 to row:
    - For i = 1 to j:
        - Display value of i followed by two spaces
    - Move to the next line

### Step 8: Print extra newlines ###

### Step 9: Part d - Print decreasing numbers in rows with spaces ###
- For j = 1 to row:
    - For a = row - j down to 1:
        - Display four spaces
    - For i = j down to 1:
        - If i < 10, display i followed by three spaces
        - Else, display i followed by two spaces
    - Move to the next line

### Step 10: Print extra newlines ###

### Step 11: Part e - Print alphabets from 'A' to the row-1 letter in a triangle pattern ###
- If row < 63:
    - For j = 'A' to (row-1 + 'A'):
        - For i = 'A' to j:
            - Display the character i followed by a space
        - Move to the next line

### Step 12: Print extra newlines ###

### Step 13: Part f - Print lowercase alphabets in a grid ###
- If row < 30:
    - For j = 'a' to (row-1 + 'a'):
        - For i = 'a' to ('a' + column):
            - Display the character i followed by a space
        - Move to the next line

### Step 14: Print extra newlines ###

### Step 15: Part g - Print hollow rectangle with '*' ###
- For j = 1 to row:
    - For i = 1 to column:
        - If i == 1 or i == column or j == 1 or j == row, display "*"
        - Else, display spaces
    - Move to the next line

### Step 16: Print extra newlines ###

### Step 17: Part h - Print inverted triangle of '*' ###
- For j = row down to 1:
    - For a = j down to 1:
        - Display "*"
    - Move to the next line

### Step 18: Print extra newlines ###

### Step 19: Part i - Print hollow inverted triangle of '*' ###
- For j = row down to 1:
    - For a = j down to 1:
        - If j == row or j == 1 or a == 1 or a == j, display "*"
        - Else, display spaces
    - Move to the next line

### Step 20: Print extra newlines ###

### Step 21: Part j - Print left-aligned inverted triangle of '*' ###
- For j = 0 to row:
    - For i = row - j down to 1:
        - Display spaces
    - For a = j down to 1:
        - Display "*"
    - Move to the next line

### Step 22: Print extra newlines ###

### Step 23: Part k - Print right-aligned inverted triangle of '*' ###
- For j = row down to 1:
    - For i = row - j down to 1:
        - Display spaces
    - For a = j down to 1:
        - Display "*"
    - Move to the next line

### Step 24: Print extra newlines ###

### Step 25: Part L - Print hollow inverted triangle with '*' ###
- For j = 1 to row:
    - For i = row - j down to 1:
        - Display spaces
    - For a = j down to 1:
        - If j == 1 or j == row or a == 1 or a == j, display "*"
        - Else, display spaces
    - Move to the next line

### Step 26: End ###
