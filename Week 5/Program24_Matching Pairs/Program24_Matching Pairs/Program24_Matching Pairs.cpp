#include <iostream>
#include <cstdlib>
#include <ctime>

const int BOARD_SIZE = 10;
const int CARD_FACES = 5;

void drawBoard(const char boardCards[], const bool cardsFound[]) {
    system("cls");
    std::cout << "Attempt count: ";
    // TODO: Print the attempt count

    for (int i = 0; i < BOARD_SIZE; ++i) {
        if (cardsFound[i]) {
            std::cout << "[" << boardCards[i] << "]";
        }
        else {
            std::cout << "[" << i + 1 << "]";
        }

        if (i == BOARD_SIZE / 2 - 1) {
            std::cout << std::endl;  // Split the board into two rows
        }
    }
    std::cout << std::endl;
}

bool checkMatch(const char boardCards[], bool cardsFound[], int guess1, int guess2, int& score) {
    if (boardCards[guess1 - 1] == boardCards[guess2 - 1]) {
        std::cout << "Match!" << std::endl;
        score++;
        cardsFound[guess1 - 1] = true;
        cardsFound[guess2 - 1] = true;
        return true;
    }
    else {
        std::cout << "No match!" << std::endl;
        return false;
    }
}

int main() {
    char boardCards[BOARD_SIZE];
    bool cardsFound[BOARD_SIZE] = { false };
    int score = 0;
    bool playing = true;

    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Fill the board with card faces twice
    char cardFaces[CARD_FACES] = { 'A', 'B', 'C', 'D', 'E' };
    for (int i = 0; i < BOARD_SIZE; ++i) {
        boardCards[i] = cardFaces[i % CARD_FACES];
    }

    // Shuffle the board
    for (int i = 0; i < BOARD_SIZE; ++i) {
        int randomIndex = std::rand() % BOARD_SIZE;
        std::swap(boardCards[i], boardCards[randomIndex]);
    }

    while (playing) {
        drawBoard(boardCards, cardsFound);

        int guess1, guess2;
        std::cout << "Enter first selection: ";
        std::cin >> guess1;
        std::cout << "Enter second selection: ";
        std::cin >> guess2;

        drawBoard(boardCards, cardsFound);

        if (checkMatch(boardCards, cardsFound, guess1, guess2, score)) {
            // Check if the player has won
            if (score == CARD_FACES) {
                std::cout << "Congratulations! You have won!" << std::endl;
                playing = false;
            }
        }

        // TODO: Increase attempt count

        // TODO: Add a condition to end the game if the maximum attempts have been reached

        // TODO: Implement a delay before clearing the screen
        //       (You can use the <chrono> library and std::this_thread::sleep_for)
    }

    return 0;
}
