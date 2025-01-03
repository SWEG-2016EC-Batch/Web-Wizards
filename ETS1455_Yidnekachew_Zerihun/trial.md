```mermaid   
flowchart TD   
A([Start]) --> B[/ Display Main Menu /]
B --> C[/ Read choice /]
C --> D{ Is choise 3 }
D --Yes--> E[/ Display "Good Bye"/] 
E --> F([End])
C --No--> G{ Is choice 2}
G --Yes--> H[/ Display Total round played, player 1 wins, player 2 wins, and Draws /]
H --> I[ Prompt user to press 'enter' to return to main menu]
I --> B
G --No--> J{Is choice 1}
J --Yes--> K[/ Ask which player will be the dealer /]
K --> M{Is choice 1 or 2}
M --Yes--> N[Counter=0]
N --> P[Deal cards for player 1 and 2]
P --> Q{Is playercard = 'a'}
Q --yes--> R[playersum += 11, player ace count++]
Q --No--> S{Is playercard = 't' or 'j' or 'q' or 'k'}
S --Yes--> T[playersum += 10]
S --No--> U[playersum += playercard]
U --> V[counter ++]
V --> W{Is counter < 2}
W --Yes--> P 
W --No--> X{Is playersum>21 and player ace count}
X --Yes--> Y[playersum -= 10, player ace count--]
Y --> X
X --No--> Z[/Display the cards of player 1 and player 2/]
Z --> AA{Is player1 sum =21 and player2sum =21}
AA --Yes--> AB[/ Display "It's a draw"/]
AB --> AC[total rounds++, draws++]
AA --No--> AD{Is player1 sum=21}
AD --Yes--> AE[/ Display "Player 1 has blackjack and has won"/]
AE --> AF[player1 wins++, total rounds++] 
AD --No--> AG{Is player2 sum=21}
AG --Yes--> AH[/Display "Player 2 has blackjack and has won"/]
AH --> AI[player2 wins++, total rounds++]


AG --No--> AJ[/Display player1 sum/]
AJ --> AK{Is player1 sum >21}
AK --Yes--> AL[/ Display "Player is busted"/]
AK --No--> AM[/ Ask to hit or stand /]
AM --> AN{Is action = 's'}
AN --No--> AO{Is action = 'h'}
AO --No--> AP[/Display "Invalid input try again"/]
AP --> AM
AO --Yes--> AQ[Deal anoter card]
AQ --> AR{Is playercard = 'a'}
AR --yes--> AS[playersum += 11, player ace count++]
AR --No--> AT{Is playercard = 't' or 'j' or 'q' or 'k'}
AT --Yes--> AU[playersum += 10]
AT --No--> AV[playersum += playercard - '0']
AS --> AW[Player1 card count++]
AU --> AW
AV --> AW
AW --> AX{Is playersum>21 and player ace count}
AX --Yes--> AY[playersum -= 10, player ace count--]
AY --> AX
AX --No--> AJ


AL --> AZ
AN --Yes--> AZ[/ "Display "Dealers turn"/]
AZ --> BA{Is player2 sum >21}
BA --Yes--> BB[/ Display "Dealer is busted"/]
BA --No--> BC[/ Ask to hit or stand /]
BC --> BD{Is action = 's'}
BD --No--> BE{Is action = 'h'}
BE --No--> BF[/Display "Invalid input try again"/]
BF --> BC
BE --Yes--> BG[Deal another card]
BG --> BH{Is playercard = 'a'}
BH --yes--> BI[playersum += 11, player ace count++]
BH --No--> BJ{Is playercard = 't' or 'j' or 'q' or 'k'}
BJ --Yes--> BK[playersum += 10]
BJ --No--> BL[playersum += playercard - '0']
BI --> BM[Player2 card count++]
BK --> BM 
BL --> BM
BM --> BN{Is playersum>21 and player ace count}
BN --Yes--> BO[playersum -= 10, player2 ace count--]
BO --> BN 
BN --No--> AZ

BB --> BP[/ Display player1sum and player2sum/]
BD --Yes--> BP
BP --> BQ{Is player1 sum>21 and player2 sum>21}
BQ --Yes--> BR[/ Display "Both players are busted, it's a draw /]
BR --> BS[ draw++]
BQ --No--> BT{Is player 1 sum>21}
BT --Yes--> BU[/Display "Player2 wins as Player1 is busted" /]
BU --> BV[player2 wins++]
BT --No--> BW{Is player2 sum>21}
BW --Yes--> BX[/ Display "Player1 wins as Player2 is busted"/]
BX --> BY[player1 wins++]
BW --No--> BZ{Is player1 sum > player2 sum}
BZ --Yes--> CA[/Display "Player1 wins with the higher score"/]
CA --> CB[player1wins ++ ]
BZ --No--> CC{Is player2 sum > player1 sum}
CC --Yes--> CD[/Display "Player2 wins the higher score"/]
CD --> CE[player2 wins++]
CC --No--> CF[/Display "It's a draw"/]
CF --> CG[draws++]
CG --> CH[total rounds++]
CH --> B


M --No--> O[/Display "Invalid input, try again"/]
O --> B
J --No--> L[/ Display "Invalid input, try again" /]
L --> B
