#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

// Function to display the menu and get user's choice
int displayMenu() {
    int choice;
    std::cout << "Menu:\n";
    std::cout << "1. Enter a score\n";
    std::cout << "2. Display scores\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cin.ignore(); // Ignore the newline character in the input buffer
    return choice;
}

// Function to enter a score and name, and update the scores vector
void enterScore(std::vector<std::pair<int, std::string>>& scores) {
    int score;
    std::string name;
    std::cout << "Enter the score: ";
    std::cin >> score;
    std::cin.ignore(); // Ignore the newline character in the input buffer
    std::cout << "Enter the name: ";
    std::getline(std::cin, name);

    if (scores.size() < 10) {
        scores.push_back(std::make_pair(score, name));
    }
    else {
        auto minScore = std::min_element(scores.begin(), scores.end(),
            [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b) {
                return a.first < b.first;
            });
        if (score > minScore->first) {
            minScore->first = score;
            minScore->second = name;
        }
    }

    std::sort(scores.rbegin(), scores.rend()); // Sort scores in descending order
}

// Function to display the scores
void displayScores(const std::vector<std::pair<int, std::string>>& scores) {
    if (scores.empty()) {
        std::cout << "No scores available." << std::endl;
    }
    else {
        std::cout << "Scores:\n";
        for (const auto& score : scores) {
            std::cout << score.first << " - " << score.second << std::endl;
        }
    }

    std::cout << "Press Enter to continue...";
    std::cin.ignore(); // Wait for the user to press Enter
}

// Function to save the scores to a text file
void saveScores(const std::vector<std::pair<int, std::string>>& scores) {
    std::ofstream file("scores.txt");

    if (file.is_open()) {
        for (const auto& score : scores) {
            file << score.first << " - " << score.second << std::endl;
        }
        file.close();
        std::cout << "Scores saved to scores.txt." << std::endl;
    }
    else {
        std::cout << "Error opening scores.txt for writing." << std::endl;
    }
}

// Function to load scores from a text file
std::vector<std::pair<int, std::string>> loadScores() {
    std::vector<std::pair<int, std::string>> scores;
    std::ifstream file("scores.txt");

    if (file.is_open()) {
        int score;
        std::string name;
        while (file >> score) {
            file.ignore(); // Ignore the '-' character
            std::getline(file, name);
            scores.push_back(std::make_pair(score, name));
        }
        file.close();
    }
    else {
        std::cout << "Error opening scores.txt for reading." << std::endl;
    }

    return scores;
}

int main() {
    std::vector<std::pair<int, std::string>> scores = loadScores();
    int choice;

    do {
        choice = displayMenu();

        switch (choice) {
        case 1:
            enterScore(scores);
            saveScores(scores);
            break;
        case 2:
            displayScores(scores);
            break;
        case 3:
            std::cout << "Exiting program..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 3);

    return 0;
}
