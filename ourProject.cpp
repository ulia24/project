#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    
    int playerScore = 0;
    int computerScore = 0;
    
    char choice;
    
    cout << "Welcome to the Dice Game!" << endl;
    
    do {
        cout << "Press enter to roll the dice.";
        cin.ignore();
        
        int playerRoll = rollDice();
        int computerRoll = rollDice();
        
        cout << "You rolled a " << playerRoll << "." << endl;
        cout << "The computer rolled a " << computerRoll << "." << endl;
        
        if (playerRoll > computerRoll) {
            cout << "You win this round!" << endl;
            playerScore++;
        } else if (playerRoll < computerRoll) {
            cout << "Computer wins this round!" << endl;
            computerScore++;
        } else {
            cout << "It's a tie!" << endl;
        }
        
        cout << "Player Score: " << playerScore << endl;
        cout << "Computer Score: " << computerScore << endl;
        
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Final Scores:" << endl;
    cout << "Player Score: " << playerScore << endl;
    cout << "Computer Score: " << computerScore << endl;
    
    if (playerScore > computerScore) {
        cout << "Congratulations! You win!" << endl;
    } else if (playerScore < computerScore) {
        cout << "Sorry, you lost. Better luck next time!" << endl;
    } else {
        cout << "It's a tie game!" << endl;
    }
    
    return 0;
}