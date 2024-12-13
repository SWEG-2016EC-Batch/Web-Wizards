```mermaid
flowchart TD
A(START)-->B[/prompt message/]
B-->C[/read number/]
C-->D{check number}
D-->|Invalid|B
D-->|Valid|E[/read choice/]
E-->F{choice=='a'}
F-->|yes|G[/print reverse of number/]
F-->|no|H{choice=='b'}
H-->|yes|I[/print amount of digits/]
H-->|no|J{choice=='c'}
J-->|yes|K[/print product of even digits/]
J-->|no|L{choice=='d'}
L-->|yes|M[/print sum of 1st & last diigt/]
L-->|no|N{choice=='e'}
N-->|yes|O[/print swap of 1st & last digit/]
N-->|no|P{choice=='f'}
P-->|yes|Q{check if it's palindrome}
Q-->|yes|R[/print it's palindrome/]
Q-->|no|S[/print it's palindrome/]
P-->|no|T{choice=='g'}
T-->|yes|U[/print frequency of each digit/]
T-->|no|V{choice=='h'}
V-->|yes|W{check it's strong}
W-->|yes|X[/print it's strong/]
W-->|no|Y[/print it'snot strong/]
V-->|no|Z{choice=='i'}
Z-->|yes|1{check it's perfect}
1-->|yes|2[/print it's perfect/]
1-->|no|3[/print it's not perfect/]
Z-->|no|5[/read user_want/]
5-->|y|B
5-->|n|4[/terminate program/]
3-->4
2-->4
Y-->4
X-->4
U-->4
S-->4
R-->4
O-->4
M-->4
K-->4
I-->4
G-->4
