# 1.Pseudocode
--->Start 

1.Read name, tax rate, and pension 

2.Check name 

2.1 If name is incorrect, go back to step 1 

2.2 If name is correct, proceed to step 

3.Read base salary 

4.Check base salary 

4.1 If base salary is invalid, go back to step 3 

4.2 If base salary is valid, proceed to step 

5.Read weekly work hours (WWH) 

6.Check WWH 

6.1 If WWH is invalid (WWH < 0 or WWH > 168), go back to step 5 

6.2 If WWH is valid, proceed to step 7 

7.Read bonus rate per hour (BRPH) 

8.Check BRPH 

8.1 If BRPH is invalid (BRPH < 0 or BRPH > 1), go back to step 7

8.2 If BRPH is valid, proceed to step 9 

9.Calculate bonus payment = WWH * BRPH * base salary

10.Print bonus payment 

11.Calculate gross salary = base salary + bonus payment

12.Print gross salary (GS) 

13.Calculate tax deduction = gross salary * tax rate

14.Print tax deduction (TD) 

15.Calculate pension deduction = base salary * pension

16.Print pension deduction (PD) 

17.Calculate net salary = GS - TD - PD 

18.Print net salary

19.end

```mermaid
flowchart TD
A(START)-->B[/read name,tax rate,pension/]
B-->C{check name}
C-->|incorrect| B
C-->|correct| D[/read base salary/]
D-->E{check base salary}
E-->|Invalid| D
E-->|Valid| F[/read weekly work hrs|WWH/]
F-->G{check WWH or WWH < 0 or WWH>168}
G-->|Yes| F
G-->|No| H[/read bonus rate per hr|BRPH/]
H-->I{check BRPH <0 or BRPH>1 or else}
I-->|Yes| H
I-->|No| J[bonus payment=WWH*BRPH*base salary]
J-->K[/print bonus payment/]
K-->L[gross salary = base salary*bonus payment]
L-->M[/print gross salary|GS/]
M-->N[tax deduction=gross salary*tax rate]
N-->O[/print tax deduction|TD/]
O-->P[pension deduction = base salary*pension]
P-->Q[/print pension deduction|PD/]
Q-->R[net salary = GS-TD-PD]
R-->S[/print net salary/]
S-->T(STOP)


