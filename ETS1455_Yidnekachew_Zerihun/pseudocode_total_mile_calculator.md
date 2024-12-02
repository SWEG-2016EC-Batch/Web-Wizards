# Pseudo Code for Fuel Efficiency Calculation
1. **Start:**
2. **Initialize Variables:**
   - `tankCapacity` (float)
   - `milesPerGallon` (float)
   - `totalMiles` (float)

3. **Prompt user for tank capacity:**
   - Display message: "Enter the capacity of the fuel tank in gallons"
   - Get input for `tankCapacity`
   - **Validation:**
     - If `tankCapacity <= 0` or invalid input, re-prompt user up to 3 attempts.
     - If input is invalid for 3 times, exit program.

4. **Prompt user for miles per gallon:**
   - Display message: "Enter the miles per gallon the automobile can be driven"
   - Get input for `milesPerGallon`
  
  5. **Calculate Total Miles:**
   - `totalMiles = tankCapacity * milesPerGallon`

6. **Display the result:**
   - Print: "The automobile can be driven X miles without refueling" where X is `totalMiles`.

7.**End of Program**
