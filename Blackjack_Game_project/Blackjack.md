# Pseudocode for Two-Player Blackjack Game

## **Initialization**
1. Import necessary libraries:
   - Random number generator
   - Time for seeding random numbers
   - Character manipulation

2. Define variables:
   - Deck of cards: `deck = ['2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a']`
   - Counters for `totalRounds`, `player1Wins`, `player2Wins`, and `draws`

3. Seed the random number generator using the current time.

---

## **Main Menu and Roles**
1. Display the menu:
   

3. Take user input for the menu choice:
- If **`3`**, exit the game.
- If **`2`**, display the `Dashboard`:
  - Total rounds played
  - Wins for Player 1
  - Wins for Player 2
  - Number of draws
- If **`1`**, start a new game.

3. Ask the user who will be the dealer:
- **Player 1** or **Player 2**
4. Validate input:
- If invalid input, restart the game.

---

## **Game Setup and Initial Turn**
1. Initialize variables for both players:
- Hands (`player1Cards`, `player2Cards`)
- Sum of card values (`player1Sum`, `player2Sum`)
- Count of Aces for each player (`player1AceCount`, `player2AceCount`)

2. Deal **2 cards** to each player:
- Randomly pick cards from the deck.
- Compute the sum based on card values:
  - `'a'` = 11 (adjust later if sum exceeds 21)
  - `'t', 'j', 'q', 'k'` = 10
  - `'2'` to `'9'` = Numeric value

3. Adjust for Aces:
- If sum exceeds 21, reduce the value of Aces from 11 to 1.

4. Display initial cards:
- Show both cards for the non-dealer player.
- Show one visible card for the dealer.

5. Check for immediate **Blackjack** or **Bust**:
- If both players have 21, it's a **draw**.
- If one player has 21, that player **wins** immediately.

---

## **Player and Dealer Turns**
1. **Player's Turn**:
- Loop until the player **stands** or **busts**:
  - Display the current sum.
  - Ask if the player wants to:
    - **Hit** (draw another card).
    - **Stand** (end their turn).
  - If hitting:
    - Draw a card and update the sum.
    - Adjust for Aces if necessary.
  - If the player **busts**, end their turn.

2. **Dealer's Turn**:
- Loop until the dealer's sum is at least **17**:
  - Display the current sum.
  - The dealer will:
    - **Hit** if the sum is less than 17.
    - **Stand** if the sum is 17 or more.
  - Draw cards and update the sum.
  - Adjust for Aces if necessary.
  - If the dealer **busts**, end their turn.

---

## **Determine Winner**
1. Compare final sums of both players:
- If both are **busted**, it's a **draw**.
- If only one is **busted**, the other player wins.
- Otherwise:
  - The player with the higher sum wins.
  - If sums are equal, it's a draw.

2. Update the counters:
- Increment `player1Wins`, `player2Wins`, or `draws`.

3. Increment `totalRounds`.

---

## **Repeat or Exit**
1. After determining the winner:
- Return to the **Main Menu**.
- Exit the game if the user chooses to.

---

## **End of Program**
1. Display a goodbye message upon exiting.

   # Flowchart for Two-Player Blackjack Game

```mermaid
flowchart TD
    A[Start Game] --> B[Display Main Menu]
    B --> C{User Choice?}
    C -->|Exit| D[Display Goodbye Message and Exit]
    C -->|Dashboard| E[Display Dashboard]
    C -->|New Game| F[Ask Who Will Be Dealer]
    F --> G{Dealer Role}
    G -->|Player 1| H[Initialize Player 1 & Player 2 Hands]
    G -->|Player 2| I[Initialize Player 2 & Player 1 Hands]
    
    H --> J[Deal Initial Cards to Both Players]
    I --> J[Deal Initial Cards to Both Players]
    
    J --> K[Adjust for Aces]
    K --> L{Check for Blackjack?}
    L -->|Yes| M[Display Blackjack Result and Return to Main Menu]
    L -->|No| N[Start Player's Turn]
    
    N --> O{Player's Decision?}
    O -->|Hit| P[Player Draws Card]
    O -->|Stand| Q[End Player's Turn]
    O -->|Stop| R[Exit Game]
    
    P --> S[Update Player's Sum and Adjust Aces]
    S --> T{Check if Player Busts}
    T -->|Yes| U[Display Bust and End Player's Turn]
    T -->|No| O
    
    Q --> V[Start Dealer's Turn]
    V --> W{Dealer's Decision?}
    W -->|Hit| X[Dealer Draws Card]
    W -->|Stand| Y[End Dealer's Turn]
    W -->|Stop| R[Exit Game]
    
    X --> Z[Update Dealer's Sum and Adjust Aces]
    Z --> AA{Check if Dealer Busts}
    AA -->|Yes| AB[Display Bust and End Dealer's Turn]
    AA -->|No| W
    
    Y --> AC[Compare Player and Dealer Scores]
    AC --> AD{Winner Determination}
    AD -->|Player Wins| AE[Display Player's Win]
    AD -->|Dealer Wins| AF[Display Dealer's Win]
    AD -->|Draw| AG[Display Draw]
    
    AE --> AH[Update Wins and Return to Main Menu]
    AF --> AH[Update Wins and Return to Main Menu]
    AG --> AH[Update Draws and Return to Main Menu]
    
    AH --> A[Back to Main Menu]


