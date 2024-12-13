#Pseudocode.
1.Start
2.Input number.
3. Initialize temp to number.
4. Count the number of digits in the input:
5. Divide temp by 10.
6. Last digit = number % 10.
7. First digit = number.
8. While first digit >= 10, divide first digit by 10.
9. Extract the middle part of the number (excluding the first and last digits):\
10. Construct the new number with the first and last digits swapped.
11. Print "Number after swapping first and last digits:" followed by swapped number.
12. END
