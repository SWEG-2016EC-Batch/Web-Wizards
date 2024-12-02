# Problem Analysis   
**Input:** working hour, base salary, and bonus rate.  
**Output:** pension, salary after pension, bonus, gross income, tax, and net salary.  
# Operation:   
- Variable declaration that holds an input and operation results.
- Initializing pension rate to 0.05 and tax rate to 0.15.
- Read working hour, base salary and bonus rate.
- Calculate the pension: pension = base salary × pension rate
- Calculate the salary after pension: salary after pension = base salary − pension  
- Calculate the bonus: bonus = working hour × bonus rate
- Calculate the gross income: gross income = salary after pension + bonus.
- Calculate the tax: tax = gross income × tax rate.
- Calculate the net salary: net salary = gross income − tax.
- Display pension, salary after pension, bonus, gross income, tax, and net salary.

# Pseudocode   
1. Start.  
2. Input working hour, base salary and bonus rate.   
3. Calculate the pension: pension = base salary × pension rate
4. Calculate the salary after pension: salary after pension = base salary − pension  
5. Calculate the bonus: bonus = working hour × bonus rate
6. Calculate the gross income: gross income = salary after pension + bonus.
7. Calculate the tax: tax = gross income × tax rate.
8. Calculate the net salary: net salary = gross income − tax.
9. Display pension, salary after pension, bonus, gross income, tax, and net salary.

# Flowchart  
```mermaid   
flowchart TD   
A([Start]) --> B[/ Input base salary, working hour, bonus rate/]
B--> C[Pension = base salary × pension rate]
C --> D[Salary after pension = base salary - pension]
D --> E[bonus = working hour × bonus rate]  
E --> F[gross income = salary after pension + bonus]
F --> G[tax = gross income × tax rate] 
G --> H[net salary = gross income - tax]
H --> I[/ Display pension, salary after pension, bonus, gross income, tax, net salary /]
I --> J([ End ])
