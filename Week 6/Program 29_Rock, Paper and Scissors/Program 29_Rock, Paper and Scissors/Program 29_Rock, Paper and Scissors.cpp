#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    int playerScore = 0;
    int computerScore = 0;
    const int MAX_SCORE = 3;

    std::string choices[3] = { "Rock", "Paper", "Scissors" };

    srand(time(0)); // Initialize random seed

    std::cout << "Let's play Rock, Paper, Scissors!" << std::endl;

    while (playerScore < MAX_SCORE && computerScore < MAX_SCORE) {
        std::string playerChoice;
        int computerChoice = rand() % 3;

        std::cout << "Enter your selection: ";
        std::cin >> playerChoice;

        // Convert player's choice to lowercase
        for (char& c : playerChoice) {
            c = tolower(c);
        }

        std::cout << "You chose: " << playerChoice << std::endl;
        std::cout << "The computer chose: " << choices[computerChoice] << std::endl;

        if (playerChoice == choices[computerChoice]) {
            std::cout << "It was a draw." << std::endl;
        }
        else if (
            (playerChoice == "rock" && choices[computerChoice] == "Scissors") ||
            (playerChoice == "paper" && choices[computerChoice] == "Rock") ||
            (playerChoice == "scissors" && choices[computerChoice] == "Paper")
            ) {
            std::cout << "Congratulations, you win!" << std::endl;
            playerScore++;
        }
        else {
            std::cout << "Sorry, you lose." << std::endl;
            computerScore++;
        }

        std::cout << "You need: " << MAX_SCORE - playerScore << " to complete the game." << std::endl;
        std::cout << "The computer needs: " << MAX_SCORE - computerScore << " to complete the game." << std::endl;
    }

    if (playerScore > computerScore) {
        std::cout << "Congratulations, you won!" << std::endl;
    }
    else {
        std::cout << "Sorry, you lost." << std::endl;
    }

    std::cout << "Final scores: " << std::endl;
    std::cout << "Player: " << playerScore << std::endl;
    std::cout << "Computer: " << computerScore << std::endl;

    std::cout << "Game over..." << std::endl;

    return 0;
}
