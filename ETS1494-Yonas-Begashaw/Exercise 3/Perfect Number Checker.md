# Problem Analysis   
**Input:** A number.  
**Output:** Result.

# Operation:   
- Variable declaration that holds an input and operation results.
- Intitialize a variable sum to 0 and a variable i to 1.
- Check if i is a factor of the number.
- If i is a factor, update sum: sum = sum + i.
- Update i: i = i + 1.
- If i <= number go to step 3.
- If sum - number = number, display "The number is a perfect number."
- If sum - number not equal to number, display "The number isn't a perfect number."
  
  
# Pseudocode   
1. Start.
2. Intitialize the variable counter to 0.
3. Calculate digit: digit = number % 10.
4. Update number: number = number / 10.
5. Update counter: counter = counter + 1.
6. If number is not equal to zero, go to step 4.
7. Display the vaue of counter as number of digits.
8. End.
 
