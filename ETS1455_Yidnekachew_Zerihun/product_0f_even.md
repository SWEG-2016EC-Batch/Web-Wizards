1. **Start**
2. **Input**: Read an integer `number` from the user.
3. **Initialize**:
   - `product = 1` (to hold the product of even digits)
   - `hasEvenDigit = false` (flag to check if there are any even digits)
4. **Set**: `tempNumber = abs(number)` (handle negative numbers by taking the absolute value)
5. **While** `tempNumber` is not equal to 0:
   - `digit = tempNumber % 10` (get the last digit)
   - **If** `digit` is even and not zero:
     - `product = product * digit` (multiply the product by the even digit)
     - `hasEvenDigit = true` (set the flag to true)
   - `tempNumber = tempNumber / 10` (remove the last digit)
6. **If** `hasEvenDigit` is false:
   - **Output**: "There are no even digits in the number."
   - **Return** `0`
7. **Output**: "Product of even digits: ", `product`
8. **End**
