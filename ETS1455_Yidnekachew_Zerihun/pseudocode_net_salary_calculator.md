# Pseudocode for Calculating Employee Salary

1.Start

2. Declare variables
- Declare `employee_name` as string
- Declare `weekly_working_hours`, `bonus_rate`, `base_salary`, `bonus_payment`, `gross_salary`, `net_salary`, `tax_deduction`,`pention` as double
- Declare `pension_rate`, `tax_deduction_rate` as double

3. Read input values from the user
- Prompt user to enter `employee_name`
- Read `employee_name` from input
- Prompt user to enter `weekly_hours`
- Read `weekly_hours` from input
- Prompt user to enter `bonus_rate_per_hour`
- Read `bonus_rate_per_hour` from input
- Prompt user to enter `base_salary`
- Read `base_salary` from input

4. Calculations

- Calculate bonusPayment = weekly_working_hours * bonus_rate.
- Calculate grossSalary = base_salary + bonus_payment.
- Calculate tax_deduction = tax_deduction_rate * gross_salary.
- Calculate pention = pention_rate * base_salary.
- Calculate net_salary = gross_salary - (pension + tax_deduction).

5. Output

- Display bonus_payment with name: "Bonus Payment of [name] is: $[bonus_payment]".
- Display gross_salary with name: "Gross Salary of [name] is: $[gross_salary]".
- Display tax_deduction with name: "Tax deduction of [name] is: $[tax_deduction]".
- Display pention with name: "Gross Salary of [name] is: $[pention]".
- Display net_salary with name: "Net Salary of [name] is: $[net_salary]".
