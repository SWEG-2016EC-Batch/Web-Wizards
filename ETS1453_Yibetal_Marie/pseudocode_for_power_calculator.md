
Start 1. Read x 

2.Check invalidity of x 

2.1 If x is invalid, go back to step 1 

2.2 If x is valid, proceed to step 3 

3.Read y 

4.Check invalidity of y 

4.1 If y is invalid, go back to step 3 

4.2 If y is valid, proceed to step 5 

5.Set temp1 = x and temp2 = y 

6.Check if y < 0 

6.1 If y < 0, then 

6.1.1 Set i = 1 

6.1.2 Set y = -1 * temp2 

6.1.3 While i < y, do 6.1.3.1 x = temp1 * x , 6.1.3.2 Increment i by 1 x

6.1.4 If i >= y, then 6.1.4.1 x = 1 /x

7.Else, check if y == 0 

7.1 If y == 0, then 

7.1.1 x = 1 

7.2 Else, set i = 1 

7.2.1 While i < y, do 7.2.1.1 x = temp1 * x,7.2.1.2 Increment i by 1 d

8.stop end

```mermaid
flowchart TD
A(START)-->B[/read x/]
B-->C{check invalidity of x}
C-->|Yes| B
C-->|No| D[/read y/]
D-->E{check invalidity of y}
E-->|Yes| D
E-->|No| F[temp1=x,temp2=y]
F-->G{ y<0 }
G-->|Yes| H[i=1,y=-1*temp2]
H-->I{ i< y }
I-->|Yes| J[ x = temp1 * x ]
J-->K[ i = i + 1 ]
K-->I
I-->|No| L[ x = 1/x ]
G-->|No| M[ y == 0 ]
M-->|True| N[ x = 1 ]
M-->|False| O[ i = 1 ]
O--> P{ i < y }
P-->|True| Q[ x = temp1*x ]
Q-->R[ i = i + 1 ]
R-->P
P-->|False| S(STOP)
L-->S
N-->S

 
