1. **Start**
2. **Display Menu**:
    - "1. Reverse the number"
    - "2. Print the first and last digit of the number and their sum"
    - "3. Exit"
3. **Read User Choice**
4. **Switch Choice**:
    - **Case 1**: 
        - **Input**: Ask user for an integer
        - **Call Function**: `printReversedNumber(number)`
    - **Case 2**: 
        - **Input**: Ask user for an integer
        - **Call Function**: `printFirstLastDigitAndSum(number)`
    - **Case 3**: 
        - **Output**: "Exiting the program."
        - **Terminate Program**
    - **Default**: 
        - **Output**: "Invalid choice. Please try again."
5. **Repeat Until**: User selects Exit
6. **End**

### Function `printReversedNumber(number)`
1. **Initialize**: `reversedNumber = 0`
2. **While**: `number != 0`
    - `remainder = number % 10`
    - `reversedNumber = reversedNumber * 10 + remainder`
    - `number = number / 10`
3. **Output**: `reversedNumber`

### Function `printFirstLastDigitAndSum(number)`
1. **Initialize**: `originalNumber = abs(number)`
2. **Calculate**: `lastDigit = originalNumber % 10`
3. **Calculate**: `numDigits = log10(originalNumber) + 1`
4. **Calculate**: `firstDigit = originalNumber / 10^(numDigits - 1)`
5. **Sum**: `sum = firstDigit + lastDigit`
6. **Output**: `firstDigit`, `lastDigit`, `sum`
