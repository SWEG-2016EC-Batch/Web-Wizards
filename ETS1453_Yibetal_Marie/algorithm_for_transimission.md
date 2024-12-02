# 1.Pseudocode
--->Start

1.Read file_size

2.Set transmission_rate = 960 

3.Convert file_size to bytes by multiplying with 1048576 

4.Calculate transmission_time = file_size / transmission_rate 

5.Calculate days = transmission_time / 86400 

6.Update transmission_time to the remainder of transmission_time divided by 86400 (transmission_time %= 86400)

7.Calculate hours = transmission_time / 3600 

8.Update transmission_time to the remainder of transmission_time divided by 3600 (transmission_time %= 3600) 

9.Calculate minutes = transmission_time / 60 

10.Update transmission_time to the remainder of transmission_time divided by 60 (transmission_time %= 60) 

11.The remaining transmission_time is the number of seconds 

12.Print the number of days, hours, minutes, and seconds 

13.Stop

```mermaid
flowchart TD
A(START)-->B[/read file_size/]
B-->C[transmissin_rate = 960]
C-->D[file_size= file_size*1048576]
D-->E[transmission_time=file_size/transmission_rate]
E-->F[days = transmission_time/86400]
F-->G[transmission_time%=86400]
G-->H[hours=transmission_time/3600]
H-->I[transmission_time%=3600]
I-->J[minutes = transmission/60]
J-->K[transmission_time%=60]
K-->L[seconds = transmission_time]
L-->M(STOP)
