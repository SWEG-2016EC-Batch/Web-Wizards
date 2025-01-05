#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation

    char deck[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
    int totalRounds = 0, player1Wins = 0, player2Wins = 0, draws = 0; // Added draws counter
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
