# Problem Analysis   
**Input:** working hour, base salary, and bonus rate.  
**Output:** pension, salary after pension, bonus, gross income, tax, and net salary.  
# Operation:   
- Variable declaration that holds an input and operation results.
- Initializing pension rate to 0.07 and tax rate to 0.15.
- Read working hour and base salary.
- If woriking hour is greater than 40, ask user to input bonus rate per hour.
- If base salary is < 200, tax rate = 0 .
- If base salary is >= 200 and base salary < 600, tax rate =0.1 .
- If base salary is >= 600 and base salary < 1200, tax rate =0.15 .
- If base salary is >= 1200 and base salary < 2000, tax rate =0.2 .
- If base salary is >= 2000 and base salary < 3500, tax rate =0.25 .
- If base salary is >= 3500, tax rate =0.3 .
- Calculate the pension: pension = base salary × pension rate
- Calculate the salary after pension: salary after pension = base salary − pension  
- Calculate the bonus: bonus = working hour × bonus rate
- Calculate the gross income: gross income = salary after pension + bonus.
- Calculate the tax: tax = gross income × tax rate.
- Calculate the net salary: net salary = gross income − tax.
- Display pension, salary after pension, bonus, gross income, tax, and net salary.

# Pseudocode   
1. Start.  
2. Input working hour and base salary.
3. If working hour is greater than 40 ask user to input bonus rate.
4. If base salary is < 200, tax rate = 0 .
5. If base salary is >= 200 and base salary < 600, tax rate =0.1 .
6. If base salary is >= 600 and base salary < 1200, tax rate =0.15 .
7. If base salary is >= 1200 and base salary < 2000, tax rate =0.2 .
8. If base salary is >= 2000 and base salary < 3500, tax rate =0.25 .
9. If base salary is >= 3500, tax rate =0.3 .
10. Calculate the pension: pension = base salary × pension rate
11. Calculate the salary after pension: salary after pension = base salary − pension  
12. Calculate the bonus: bonus = working hour × bonus rate
13. Calculate the gross income: gross income = salary after pension + bonus.
14. Calculate the tax: tax = gross income × tax rate.
15. Calculate the net salary: net salary = gross income − tax.
16. Display pension, salary after pension, bonus, gross income, tax, and net salary.
