1. **Start**
2. **Input**: Read an integer `number` from the user.
3. **If** `number` is equal to 0:
   - **Output**: "Number of digits: 1"
   - **End**
4. **Initialize**: `count = 0`
5. **Set**: `tempNumber = abs(number)`  // Handle negative numbers by taking the absolute value
6. **While** `tempNumber` is greater than 0:
   - Increment `count` by 1
   - Divide `tempNumber` by 10
7. **Output**: "Number of digits: ", `count`
8. **
