1. **Start**
2. **Input**: Read an integer `number` from the user.
3. **Initialize**:
   - `frequency = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]` (array to store frequencies of digits 0-9)
4. **Set**: `tempNumber = abs(number)` (handle negative numbers by taking the absolute value)
5. **While** `tempNumber` is not equal to 0:
   - `digit = tempNumber % 10` (get the last digit)
   - `frequency[digit] = frequency[digit] + 1` (increment the frequency of the digit)
   - `tempNumber = tempNumber / 10` (remove the last digit)
6. **Print** "Digit\tFrequency"
7. **For** `i` from 0 to 9:
   - **Print** `i`, "\t", `frequency[i]`
8. **End**
