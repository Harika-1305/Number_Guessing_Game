#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    cout << "\n\t\t\tWELCOME TO GUESSTHENUMBER GAME!"
         << endl;
    cout << "\nYou have to guess a number between 1 to 100. Choices are given based on the level U choose.\n  \t\t\t\t Good Luck👍 !" << endl;

    int winCount = 0; // Counter for wins
    int lossCount = 0; // Counter for losses

    while (true) {
        // Main game loop continues after each round
        while (true) {
            cout << "\nEnter the level which U want: \n";
            cout << "1 for easy😇\n";
            cout << "2 for medium🧐\n";
            cout << "3 for difficult🤯\n";
            cout << "0 for ending the game🙃\n" << endl;
            int difficultyChoice;
            cout << "Enter The Level: ";
            cin >> difficultyChoice;

            if (difficultyChoice == 0) {
                cout << "\nFinal Score:\n";
                cout << "Wins: " << winCount << "\nLosses: " << lossCount << endl;
                exit(0); 
            }
            // secret number will be generated
            srand(time(0));
            int secretNumber = 1 + (rand() % 100);
            int playerChoice;
            int maxChances;
            if (difficultyChoice == 1) {
                maxChances = 7; // Easy
                cout << "\nYou have 7 chances only";
            } else if (difficultyChoice == 2) {
                maxChances = 5; // Medium
                cout << "\nYou have 5 chances only";
            } else if (difficultyChoice == 3) {
                maxChances = 3; // Hard
                cout << "\nYou have 3 chances only";
            } else {
                cout << "Invalid choice. Try again.\n";
                continue;
            }

            bool hasWon = false;
            for (int i = 1; i <= maxChances; i++) {
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                if (playerChoice == secretNumber) {
                    cout << "Well played👏 ! You won🏆🏆🏆 " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing....😊 " << endl;
                    hasWon = true;
                    winCount++; // Increment the  win count
                    break;
                } else {
                    cout << "Sorry😔  Try Again " << playerChoice << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is smaller than the number you have chosen" << endl;
                    } else {
                        cout << "The secret number is greater than the number you have chosen" << endl;
                    }
                    cout << (maxChances - i) << " chances left😯 " << endl; // Display remaining chances

                    if (i == maxChances) {
                        cout << "You couldn't find the secret number, it was " << secretNumber << ". You lose😢 !!\n\n";
                        lossCount++; // Increment the loss count
                    }
                }
            }

            // Displays the current score
            cout << "\nCurrent Score:\n";
            cout << "Wins: " << winCount << "\nLosses: " << lossCount << endl;
            
            // Ask the player if they want to play again
            char playAgain;
            cout << "\nDo you want to play again? (y/n): ";
            cin >> playAgain;

            if (playAgain == 'n' || playAgain == 'N') {
                cout << "\nFinal Score:\n";
                cout << "Wins: " << winCount << "\nLosses: " << lossCount << endl;
                cout << "Thanks for playing! Goodbye!\n";
                exit(0); // Exit the game
            } else if (playAgain == 'y' || playAgain == 'Y') {
                // The loop will continue to the start and allow them to choose a new level
                break;
            } else {
                cout << "Invalid input! Exiting the game.\n";
                cout << "\nFinal Score:\n";
                cout << "Wins: " << winCount << "\nLosses: " << lossCount << endl;
                exit(0);
            }
        }
    }

    return 0;
}