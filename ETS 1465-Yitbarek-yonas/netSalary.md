1. **Start**
2. **Input**: 
   - Read `basic_salary`
   - Read `worked_hours`
   - Read `bonus_rate`
   - Read `tax_rate`
3. **Initialize**: `overtime_bonus_rate = 0`
4. **If** `worked_hours` > 40:
   - Prompt user to enter `overtime_bonus_rate`
   - Calculate `overtime_hours = worked_hours - 40`
   - Calculate `overtime_bonus = overtime_hours * overtime_bonus_rate`
5. **Else**:
   - Set `overtime_bonus = 0`
6. **Calculate**:
   - `total_earnings = basic_salary + (worked_hours * bonus_rate) + overtime_bonus`
   - `pension_deduction = total_earnings * 0.07`
   - `tax_deduction = total_earnings * (tax_rate / 100)`
   - `net_pay = total_earnings - pension_deduction - tax_deduction`
7. **Output**:
   - Print `total_earnings`
   - Print `pension_deduction`
   - Print `tax_deduction`
   - Print `net_pay`
8. **End**
