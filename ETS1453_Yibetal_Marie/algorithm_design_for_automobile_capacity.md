1.Problem Description:
=
Q2.**Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling.**

2.Problem Analysis:
=
2.1 Input:
-
> 1.gallon of fuel
> 
> 2.miles per gallon  

2.2.Output:
-
>Total miles Automobile can be driven

3.Process/Operation:
=
>1.Variable declaration and initialisation
>
>2.read the user inputs and display on console
> 
>3.check the user's input less than zero or input another invalid character
> 
>3.1. if it is true , give the user another chance of defined attempts 
> 
> -->give a prompt message and reduce the number of attempts
> 
> --> and then back to 2
> 
>3.2 else go forward to the next line
> 
>4. calculate the total mile that the Automobile capable of 
>
>5.Ask the user you want to calculate another Automobile's capacity
> 
> --->print prompt input message
> 
> ---->read corresponding inputs
> 
>6.if the user want to continue,go back to line 2
> 
>7.if not , terminate the program

# 2.pseudocode
- 1.Start the program
- 2.Declare variables for gallon of fuel , miles per gallon , total miles and attempts
- 3.read gallon of fuel(GOF) input from user
- 4.check valid of (GOF) or GOF < 0
- 5.if it is so(invalid or GOF <0) , reduce the attempts by 1

------>5.1 check attempts greater than 0 ,and then give prompt message and goto step3

------>5.2 else stop the program

- 6.read miles per gallon(MPG) input from the user
- 7.check the validity of MPG or MPG<0
- 8.if so(invalid or MPG<0),reduce the attempts by 1

------->8.1 check attempts greater than 0 , then give prompt message and goto step6

------->8,2 else stop the program

- 9.Calculate the total miles(TM) automobile can be driven

---------> TM = gallon of fuel(GOF)*miles per gallon(MPG)

---------> display the total miles(TM)

- 10.check the user wants to continue calculating or not

------->if user's respons is yes , goto step 3

------->else , terminate the program

12.stop the program

```mermaid
flowchart TD
A(START)-->B[/read gallon of fuel|GOF/]
B --> C{check GOF/invalid or GOF<0}
C-->|Invalid GOF < 0| D{check attempts > 0}
D-->|No| B
C-->|Valid| E[/read miles per gallon|MPG/]
E-->G{check MPG/inValid or MPG <0}
G-->|Invalid MPG <0| H{check attempts >}
H-->|No|E
G-->|valid| J[total mile = GOF*MPG]
J-->K[/display total mile/]
K-->L{check user choice}
L-->|Yes| B
L-->|No| M(STOP)
D-->|Yes| M
H-->|Yes| M