```mermaid
flowchart TD
A(START)-->B[/print prompt messange/]
B-->C[/read user_choice/]
C-->D{user_choice==1}
D--->|yes|E[/print all example patterns/]
D-->|no|F{user_choice==2}
F-->G[/print prompt messge/]
G-->H[/read size of pattern/]
H-->I[/print all patterns from user inputs/]
I-->J(terminate program)
E-->J