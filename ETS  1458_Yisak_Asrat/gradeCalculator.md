### Step 1: Start

### Step 2: Initialize variables
- `test`, `quiz`, `project`, `assignment`, `finalExam`, `sum`
- `grade` (string)

### Step 3: Get test mark input (15% of total)
- Display: "Enter test mark"
- Read `test`
- Validate input (must be between 0 and 15)
- If invalid, prompt for correct input

### Step 4: Get quiz mark input (5% of total)
- Display: "Enter quiz mark"
- Read `quiz`
- Validate input (must be between 0 and 5)
- If invalid, prompt for correct input

### Step 5: Get project mark input (20% of total)
- Display: "Enter project mark"
- Read `project`
- Validate input (must be between 0 and 20)
- If invalid, prompt for correct input

### Step 6: Get assignment mark input (10% of total)
- Display: "Enter assignment mark"
- Read `assignment`
- Validate input (must be between 0 and 10)
- If invalid, prompt for correct input

### Step 7: Get final exam mark input (50% of total)
- Display: "Enter final exam mark"
- Read `finalExam`
- Validate input (must be between 0 and 50)
- If invalid, prompt for correct input

### Step 8: Calculate total sum of marks
- `sum = test + quiz + project + assignment + finalExam`

### Step 9: Determine grade based on total sum
- If `sum >= 90`, grade = "A+"
- Else if `sum >= 80`, grade = "A"
- Else if `sum >= 75`, grade = "B+"
- Else if `sum >= 60`, grade = "B"
- Else if `sum >= 55`, grade = "C+"
- Else if `sum >= 45`, grade = "C"
- Else if `sum >= 30`, grade = "D"
- Else, grade = "F"

### Step 10: Display results
- Display test, quiz, project, assignment, final exam marks
- Display the final sum of marks and grade

### Step 11: End
