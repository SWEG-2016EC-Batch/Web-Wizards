### Step 1: Start

### Step 2: Initialize variables
- `basicSalary`, `bonusRate`, `workedHours`, `bonus`, `grossSalary`, `pension`, `incomeTax`, `netSalary`, `extraWorkedHours`, `taxRate`

### Step 3: Get basic salary and worked hours input
- Display: "Enter basic salary"
- Read `basicSalary`
- Display: "Enter worked hours"
- Read `workedHours`

### Step 4: Validate inputs
- If input is invalid, display error and stop

### Step 5: Determine tax rate
- If `basicSalary` < 200, `taxRate = 0%`
- If `basicSalary` >= 200 and < 600, `taxRate = 10%`
- If `basicSalary` >= 600 and < 1200, `taxRate = 15%`
- If `basicSalary` >= 1200 and < 2000, `taxRate = 20%`
- If `basicSalary` >= 2000 and < 3500, `taxRate = 25%`
- If `basicSalary` >= 3500, `taxRate = 30%`

### Step 6: Calculate bonus if worked hours > 40
- If `workedHours` > 40:
  - Display: "Enter overtime bonus rate"
  - Read `bonusRate`
  - Calculate `extraWorkedHours = workedHours - 40`
  - Calculate `bonus = extraWorkedHours * bonusRate`
- Else, `bonus = 0`

### Step 7: Calculate gross salary
- `grossSalary = basicSalary + bonus`

### Step 8: Calculate pension (7% of basic salary)
- `pension = basicSalary * 0.07`

### Step 9: Calculate income tax
- `incomeTax = grossSalary * taxRate`

### Step 10: Calculate net salary
- `netSalary = grossSalary - pension - incomeTax`

### Step 11: Output results
- Display tax rate, gross salary, pension, income tax, bonus, and net salary

### Step 12: End
