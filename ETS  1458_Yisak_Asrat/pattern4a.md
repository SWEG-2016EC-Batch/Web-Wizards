### Step 1: Start ###

### Step 2: Part a - Print numbers in a grid ###
- For i = 1 to 5:
    - For j = 1 to 5:
        - Display value of j followed by two spaces
    - Move to the next line

### Step 3: Print extra newlines ###

### Step 4: Part b - Print alphabet (A to X) in rows of 6 characters ###
- Initialize increment = 0
- For j = 'A' to 'X':
    - Display the character j followed by two spaces
    - Increment the counter
    - If increment equals 6:
        - Move to the next line
        - Reset increment to 0

### Step 5: Print extra newlines ###

### Step 6: Part c - Print numbers in increasing rows ###
- For j = 1 to 5:
    - For i = 1 to j:
        - Display the value of i followed by two spaces
    - Move to the next line

### Step 7: Print extra newlines ###

### Step 8: Part d - Print decreasing numbers in rows ###
- For j = 1 to 5:
    - For a = 5 - j down to 1:
        - Display four spaces
    - For i = j down to 1:
        - If i is less than 10, display i followed by three spaces
        - Else, display i followed by two spaces
    - Move to the next line

### Step 9: Print extra newlines ###

### Step 10: Part e - Print alphabet in triangle pattern (A to E) ###
- For j = 'A' to 'E':
    - For i = 'A' to j:
        - Display the character i followed by a space
    - Move to the next line

### Step 11: Print extra newlines ###

### Step 12: Part f - Print lowercase alphabet in a square grid ###
- For j = 'a' to 'e':
    - For i = 'a' to 'e':
        - Display the character i followed by a space
    - Move to the next line

### Step 13: Print extra newlines ###

### Step 14: Part g - Print hollow rectangle with '*' ###
- For j = 1 to 7:
    - For i = 1 to 8:
        - If i == 1 or i == 8 or j == 1 or j == 7:
            - Display "*"
        - Else, display spaces
    - Move to the next line

### Step 15: Print extra newlines ###

### Step 16: Part h - Print inverted triangle of '*' ###
- For j = 6 down to 1:
    - For a = j down to 1:
        - Display "*"
    - Move to the next line

### Step 17: Print extra newlines ###

### Step 18: Part i - Print hollow inverted triangle of '*' ###
- For j = 6 down to 1:
    - For a = j down to 1:
        - If j == 6 or j == 1 or a == 1 or a == j:
            - Display "*"
        - Else, display spaces
    - Move to the next line

### Step 19: Print extra newlines ###

### Step 20: Part j - Print left-aligned inverted triangle of '*' ###
- For j = 0 to 6:
    - For i = 6 - j down to 1:
        - Display spaces
    - For a = j down to 1:
        - Display "*"
    - Move to the next line

### Step 21: Print extra newlines ###

### Step 22: Part k - Print right-aligned inverted triangle of '*' ###
- For j = 6 down to 1:
    - For i = 6 - j down to 1:
        - Display spaces
    - For a = j down to 1:
        - Display "*"
    - Move to the next line

### Step 23: Print extra newlines ###

### Step 24: Part L - Print hollow inverted triangle with '*' ###
- For j = 1 to 6:
    - For i = 6 - j down to 1:
        - Display spaces
    - For a = j down to 1:
        - If j == 1 or j == 6 or a == 1 or a == j:
            - Display "*"
        - Else, display spaces
    - Move to the next line

### Step 25: End ###
