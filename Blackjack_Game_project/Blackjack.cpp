#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation

    char deck[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
    int totalRounds = 0, player1Wins = 0, player2Wins = 0, draws = 0; 
    char choice;

    while (true) {
        cout << "Welcome to Two-Player Blackjack!\n";
        cout << "1. New Game\n2. Dashboard\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '3':
                cout << "Exiting the game. Goodbye!\n";
                return 0;
            case '2':
                cout << "Dashboard:\n";
                cout << "Total Rounds Played: " << totalRounds << endl;
                cout << "Player 1 Wins: " << player1Wins << endl;
                cout << "Player 2 Wins: " << player2Wins << endl;
                cout << "Draws: " << draws << endl; // Display draws
                continue; // Return to the main menu without clearing the screen
            case '1':
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                continue;
        }
// Determine roles
        char role;
        cout << "Who will be the dealer? Enter '1' for Player 1 or '2' for Player 2: ";
        cin >> role;

        if (role != '1' && role != '2') {
            cout << "Invalid role selection. Please start a new game.\n";
            continue;
        }

        // Initialize variables
        char player1Cards[5], player2Cards[5];
        int player1Sum = 0, player2Sum = 0;
        int player1CardCount = 2, player2CardCount = 2;
        int player1AceCount = 0, player2AceCount = 0;

        // Deal initial cards
        for (int i = 0; i < 2; i++) {
            player1Cards[i] = deck[rand() % 13];
            player2Cards[i] = deck[rand() % 13];

            // Calculate Player 1's sum
            if (player1Cards[i] == 'a') {
                player1Sum += 11;
                player1AceCount++;
            } else if (player1Cards[i] == 't' || player1Cards[i] == 'j' || player1Cards[i] == 'q' || player1Cards[i] == 'k') {
                player1Sum += 10;
            } else {
                player1Sum += (player1Cards[i] - '0');
            }

            // Calculate Player 2's sum
            if (player2Cards[i] == 'a') {
                player2Sum += 11;
                player2AceCount++;
            } else if (player2Cards[i] == 't' || player2Cards[i] == 'j' || player2Cards[i] == 'q' || player2Cards[i] == 'k') {
                player2Sum += 10;
            }
else {
                player2Sum += (player2Cards[i] - '0');
            }
        }

        // Adjust for Aces initially
        while (player1Sum > 21 && player1AceCount > 0) {
            player1Sum -= 10;
            player1AceCount--;
        }
        while (player2Sum > 21 && player2AceCount > 0) {
            player2Sum -= 10;
            player2AceCount--;
        }

        string dealer = (role == '1') ? "Player 1" : "Player 2";
        string player = (role == '1') ? "Player 2" : "Player 1";

        cout << player << "'s cards: " << player1Cards[0] << " " << player1Cards[1] << endl;
        cout << dealer << "'s visible card: " << player2Cards[0] << endl;

        // Check for immediate Blackjack or Bust
        if (player1Sum == 21 && player2Sum == 21) {
            cout << "Both players have 21! It's a draw!\n";
            totalRounds++;
            draws++; // Increment draws counter
            continue;
        } else if (player1Sum == 21) {
            cout << player << " has a Blackjack and wins immediately!\n";
            player1Wins++;
            totalRounds++;
            continue;
        } else if (player2Sum == 21) {
            cout << dealer << " has a Blackjack and wins immediately!\n";
            player2Wins++;
            totalRounds++;
            continue;
        }

// Player's turn
        char action;
        while (true) {
            cout << player << "'s current sum: " << player1Sum << endl;
            if (player1Sum > 21) {
                cout << player << " is busted!\n";
                break;
            }

            cout << player << ", do you want to hit (h) or stand (s)? ";
            cin >> action;
            action = tolower(action);

            if (action == 's') break;
            if (action != 'h') {
                cout << "Invalid choice. Please choose 'h' to hit or 's' to stand.\n";
                continue;
            }

            player1Cards[player1CardCount] = deck[rand() % 13];
            cout << player << " drew: " << player1Cards[player1CardCount] << endl;

            if (player1Cards[player1CardCount] == 'a') {
                player1Sum += 11;
                player1AceCount++;
            } else if (player1Cards[player1CardCount] == 't' || player1Cards[player1CardCount] == 'j' || player1Cards[player1CardCount] == 'q' || player1Cards[player1CardCount] == 'k') {
                player1Sum += 10;
            } else {
                player1Sum += (player1Cards[player1CardCount] - '0');
            }

            player1CardCount++;

            while (player1Sum > 21 && player1AceCount > 0) {
                player1Sum -= 10;
                player1AceCount--;
            }
        }
// Dealer's turn
        cout << dealer << "'s turn begins.\n";
        while (true) {
            cout << dealer << "'s current sum: " << player2Sum << endl;

            if (player2Sum > 21) {
                cout << dealer << " is busted!\n";
                break;
            }

            if (player2Sum >= 17) {
                cout << dealer << " chooses to stand.\n";
                break;
            }

            cout << dealer << ", do you want to hit (h) or stand (s)? ";
            cin >> action;
            action = tolower(action);

            if (action == 's') break;
            if (action != 'h') {
                cout << "Invalid choice. Please choose 'h' to hit or 's' to stand.\n";
                continue;
            }

            player2Cards[player2CardCount] = deck[rand() % 13];
            cout << dealer << " drew: " << player2Cards[player2CardCount] << endl;

            if (player2Cards[player2CardCount] == 'a') {
                player2Sum += 11;
                player2AceCount++;
            }
                
else if (player2Cards[player2CardCount] == 't' ||  player2Cards[player2CardCount] == 'j' || player2Cards[player2CardCount] == 'q' || player2Cards[player2CardCount] == 'k') {
                player2Sum += 10;
            } else {
                player2Sum += (player2Cards[player2CardCount] - '0');
            }

            player2CardCount++;

            while (player2Sum > 21 && player2AceCount > 0) {
                player2Sum -= 10;
                player2AceCount--;
            }
        }

        cout << player << "'s final sum: " << player1Sum << endl;
        cout << dealer << "'s final sum: " << player2Sum << endl;

        if (player1Sum > 21 && player2Sum > 21) {
            cout << "Both players are busted! It's a draw.\n";
            draws++; // Increment draws counter
        } else if (player1Sum > 21) {
            cout << dealer << " wins as " << player << " is busted!\n";
            player2Wins++;
        } else if (player2Sum > 21) {
            cout << player << " wins as " << dealer << " is busted!\n";
            player1Wins++;
        } else if (player1Sum > player2Sum) {
            cout << player << " wins with a higher score!\n";
            player1Wins++;
        } else if (player2Sum > player1Sum) {
            cout << dealer << " wins with a higher score!\n";
            player2Wins++;
        } else {
            cout << "It's a draw!\n";
            draws++; // Increment draws counter
        }

        totalRounds++; // Increment total rounds
    }

    return 0;
}

    
