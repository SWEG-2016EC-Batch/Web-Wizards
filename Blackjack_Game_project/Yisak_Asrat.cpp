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
