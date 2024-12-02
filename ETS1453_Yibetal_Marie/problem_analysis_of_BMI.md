1.Problem Description:
= 
Q1.Make a program that calculates that body mass index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated.

2.Problem Analaysis:
=
2.1 Input:
-
>The weight of the person

>The height of the person

2.2 Output:
-
>display the weight of a person

>display the height of a person

>Finally the body mass index of a person

2.3 Process/Operation:
-
>1.Variable declaration that holds an input and output result

>2.Print the input prompt message
>  
>2.1 "Enter the weight of a person"
> 
> 2.2 "Enter the height of a person"

> 3.read corresponding input from the user
> 
> 3.1 weight
> 
> 3.2 height

>4 check if the user enters negative value 
> 
> 4.1 if user give negative number give chance of attempts = 3 , tell prompt message
> 4.2 else go forward

> 5 check if the user inputs invalid input like character
> 
> 5.1 if so,give user a chance of attempts and after attempts the program terminates

> 6.calculate the body mass index(BMI) of a person
> 
> 6.1 BMI = weight/(height*height)
> 
> 6.2.print the output prompt message and process the result or BMI

> 7.ask the user whether he/she want to continue calculating for another person or not
> 
> 7.1 If user's answer is yes(y) , goto step 2 and repeat the process
> 
> 7.2 else stop the program

> 8.end the program

# 2.pseudocode
- 1.Start the program
- 2.Declare variables for weight,height,BMI,and attempts
- 3.read weight(W) input from user 
- 4.check valid of W or W < 0
- 5.if it is so , reduce the attempts by 1

------>5.1 check attempts greater than 0 ,and then give prompt message and goto step3

------>5.2 else stop the program

- 6.read height(H) input from the user
- 7.check the validity of H or H<0
- 8.if so(invalid or H<0),reduce the attempts by 1

------->8.1 check attempts greater than 0 , then give prompt message and goto step6

------->8,2 else stop the program

- 9.Calculate the body mass index (BMI)

---------> BMI = weight/(height*height)

---------> display the BMI

- 10.check the BMI of a person

--------->10.1 if BMI < 18.5 so , display a person is underweight

--------->10.2 if BMI > 18.5 and BMI < 24.9 , then display a peson is normal weight

--------->10.3 else , display the person is obese

- 11. check the user wants to continue calculating or not

------->if user's respons is yes , goto step 3

------->else , terminate the program

12.stop the program


``` mermaid
flowchart TD
A(statrt)-->B[/read weight/]
B[read weight] --> C{check validity/w && w > 0}
C-->|Invalid| D{check attempts>3}
D-->|No| B
C-->|Valid| F[/read height/]
F-->G{check H and H>0}
G-->|Invalid| H{check attempts > 3}
H-->|No| F
G-->|Valid| J[BMI=W/H*H]
J-->M[/display BMI/]
M-->N{check BMI < 18.5}
N-->|Yes| O[/print 'underweight'/]
N-->|No| P{check BMI > 18.5 && BMI<24.9}
P-->|Yes| Q[/print 'Normal weight'/]
P-->|No| R[/print 'obese'/]
O--> S{user choice to continue}
Q-->S
R-->S
S-->|Yes| B
S-->|No| T(stop)
D-->|Yes| T
H-->|Yes| T

linkStyle 0 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 1 stroke-width:2px,fill:None,stroke:red,shape:polyline
linkStyle 2 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 3 stroke-width:2px,fill:None,stroke:yellow,shape:polyline
linkStyle 4 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 5 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 6 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 7 stroke-width:2px,fill:None,stroke:green,shape:polyline
linkStyle 8 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 9 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 10 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 11 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 12 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 13 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 14 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 15 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 16 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 17 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 18 stroke-width:2px,fill:None,stroke:purple,shape:polyline
linkStyle 19 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 20 stroke-width:2px,fill:None,stroke:blue,shape:polyline
linkStyle 21 stroke-width:2px,fill:None,stroke:blue,shape:polyline









