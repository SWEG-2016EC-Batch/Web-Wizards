# Problem Analysis   
**Input:** A number.  
**Output:** Result.

# Operation:   
- Variable declaration that holds an input and operation results.
- Intitialize a variable sum to 0.
- Input number.
- Create a varialbe temp to store the value of the number.
- Initialiize a variable factorial to 1.
- Calculate digit: digit = number % 10.
- Initialize a variable i to 1.
- Calculate factorial: factorial = factorial * i.
- Update i: i = i + 1.
- If i is <= digit, go to step 8.
- Update sum: sum = sum + factorial.
- Update number: number = number / 10.
- If number is not equal to zero, go to step 5.
- If temp = sum, display "The number is a strong number."
- If temp not equal to sum, dislplay "The number isn't a strong number.


  
  
# Pseudocode   
1. Start.
2. Intitialize a variable sum to 0.
3. Input number.
4. Create a varialbe temp to store the value of the number.
5. Initialiize a variable factorial to 1.
6. Calculate digit: digit = number % 10.
7. Initialize a variable i to 1.
8. Calculate factorial: factorial = factorial * i.
9. Update i: i = i + 1.
10. If i is <= digit, go to step 8.
11. Update sum: sum = sum + factorial.
12. Update number: number = number / 10.
13. If number is not equal to zero, go to step 5.
14. If temp = sum, display "The number is a strong number."
15. If temp not equal to sum, dislplay "The number isn't a strong number.

End.
 
