# Problem Analysis
**Input:** mass and height.   
**Output:** BMI.   
#### Operation  
- Variable declaration that holds an input and operation results.
- Read mass and height.   
- Calculat BMI: BMI = mass / height × height.
- Print BMI.
- IF BMI < 18, print "You are underweight."
- If BMI >= 18.5 and BMI < 25, print "You have a healthy weight."
- If BMI >= 25, print "You are overweight."
- 

# Pseudocode  
1. Start.
2. Read mass and height.
3. Calculat BMI: BMI = mass / height × height.
4. Print BMI.
5. If BMI is < 18.5, print "You are underweight."
6. If BMI >= 18.5 and BMI < 25, print "You have a healthy weight."
7. If BMI >= 25, print "You are overweight."
8. If you want to calculate again type 'Y' if not type 'N' .
9. Read response.
10. If response is Y, go to step 2.
11. If response is N, got step 13.
12. If invalid character typed go to step 8.
13. End.

# Flowchart

```mermaid   
flowchart TD   
A([Start]) --> B[/ Read mass and height /]
B --> C[BMI = mass / height^2]
C --> D[/ Print BMI /]
D --> E{ Is BMI < 18.5} 
E --Yes--> F[/ Print "You are underweight" /]
E --No--> G{ Is BMI greater than or equal to 18.5 and BMI less than 25}
G --Yes--> H[/ Print "You have a healthy weight"/]
G --No--> I{ Else }
I --> J[/ Print "You are overweight" /]
F --> K[/ Print "If you want to calculate again press Y if not press N/]
H --> K 
J --> K
K --> L[/ Read response /]
L --> M{Is response Y?}
M --Yes--> B
M --No--> N{Is response N?}
N --Yes--> O([ End ])
N --NO--> P[/ Print "Invalid input, try again"/]
P --> K

 
