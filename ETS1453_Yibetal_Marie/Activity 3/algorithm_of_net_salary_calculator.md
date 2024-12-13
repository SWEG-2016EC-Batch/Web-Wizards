```mermaid
flowchart   
A(START)-->B[/read basesalary\BS,workedhours\WH/]
B-->C{check WH>40}
C-->|YES|D[/read bonus rate/]
C-->|NO|X{BS<200}
X-->|YES|Y[taxrate=0,incometax=0]
X-->|NO|Z{BS>=200 or BS<600}
Z-->|YES|1[taxrate=0.1,incometax=taxrate*grossSalar]
Z-->|NO|2{BS>=600 or BS<1200}
2-->|YES|3[taxrate=0.15,incometax=taxrate*grossSalary]
2-->|NO|4{BS>=1200 or BS<2000}
4-->|YES|5[taxrate=0.2,incometax=taxrate*grossSalarY]
4-->|NO|6{BS>=2000 or BS<3500}
6-->|YES|7[taxrate=0.25,incometax=taxrate*grossSalar]
6-->|NO|8{BS>=3500}
8-->|YES|9[taxrate=0.3,incometax=taxrate*grossSalary]
D-->|valid|E[bonus=BS*WH-40*bonus rate]
D-->|invalid|D
E-->F[pension=BS*0.07,grossSalary=BS*bonus]
F-->G{BS<200}
G-->|YES|H[taxrate=0,incometax=0]
G-->|NO|J{BS>=200 or BS<600}
J-->|YES|K[taxrate=0.1,incometax=taxrate*grossSalary]
J-->|NO|M{BS>=600 or BS<1200}
M-->|YES|N[taxrate=0.15,incometax=taxrate*grossSalary]
M-->|NO|O{BS>=1200 or BS<2000}
O-->|YES|P[taxrate=0.2,incometax=taxrate*grossSalary]
O-->|NO|Q{BS>=2000 or BS<3500}
Q-->|YES|R[taxrate=0.25,incometax=taxrate*grossSalary]
R-->|NO|S{BS>=3500}
S-->|YES|T[taxrate=0.3,incometax=taxrate*grossSalary]
T-->U[netpay=grossSalary-pension-incometax]
H-->U
K-->U
N-->U
P-->U
R-->U
9-->U
7-->U
5-->U
3-->U
1-->U
Y-->U
U-->V[/print the netpay/]
V-->W(STOP)

linkStyle default interpolate basis



