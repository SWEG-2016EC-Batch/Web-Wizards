```mermaid
flowchart TD
A(START)-->B[/read test,quiz,assignment,project,finalexam/]
B-->C{check for each input}
C-->|invalid|B
C-->|valid|D[total_mark/TM=test+quiz+assignment+project+finalexam]
D-->E{TM>=90}
E-->|T|F[/print grade A+/]
E-->|F|G{TM>=85}
G-->|T|H[/print grade A/]
G-->|F|I{TM>=75}
I-->|T|J[/print grade B+/]
I-->|F|K{TM>=60}
K-->|T|L[/print grade B/]
K-->|F|M{TM>=55}
M-->|T|N[/print grade C+/]
M-->|F|O{TM>=45}
O-->|T|P[/print grade C/]
O-->|F|Q{TM>30}
Q-->|T|R[/print grade D/]
Q-->|F|S{TM<30}
S-->|T|T[/print grade F/]
T-->U(STOP)
F-->U
H-->U
J-->U
L-->U
N-->U
P-->U
R-->U
T-->U