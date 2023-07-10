#include <iostream>
using namespace std;

// Global variables
int playerHealth = 1000;
int enemyHealth = 2000;
bool playing = true;

// Function prototypes
void attackChoice(int choice);
bool playState();

int main()
{
    // Local variable to hold the player's choice
    int userChoice;

    // Loop to run as long as playing is true
    while (playing)
    {
        cout << "You have encountered a troll!" << endl;
        cout << "Choose your attack: " << endl;
        cout << "1. Use Sword" << endl;
        cout << "2. Use Magic" << endl;
        cout << "3. Use Axe" << endl;

        // Prompt the user for their choice
        cout << "Enter your choice: ";
        cin >> userChoice;

        // Call the attackChoice function, passing the user's choice
        attackChoice(userChoice);

        // Call the playState function to check if the game should continue
        playing = playState();
    }

    return 0;
}

void attackChoice(int choice)
{
    // Constants for damage values
    const int swordDamage = 300;
    const int magicDamage = 650;
    const int axeDamage = 450;
    const int trollSword = 350;
    const int trollMagic = 50;
    const int trollAxe = 100;

    switch (choice)
    {
    case 1:
        // Sword attack
        enemyHealth -= swordDamage;
        playerHealth -= trollSword;

        cout << "You hit the troll with your sword!" << endl;
        cout << "You have been hit by the troll!" << endl;
        break;

    case 2:
        // Magic attack
        enemyHealth -= magicDamage;
        playerHealth -= trollMagic;

        cout << "You cast a powerful magic spell on the troll!" << endl;
        cout << "You have been hit by the troll!" << endl;
        break;

    case 3:
        // Axe attack
        enemyHealth -= axeDamage;
        playerHealth -= trollAxe;

        cout << "You strike the troll with your mighty axe!" << endl;
        cout << "You have been hit by the troll!" << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    // Check if player or enemy health is less than 0 and set to 0 if true
    if (playerHealth < 0)
        playerHealth = 0;
    if (enemyHealth < 0)
        enemyHealth = 0;

    // Output current player and enemy health
    cout << "Player Health: " << playerHealth << endl;
    cout << "Enemy Health: " << enemyHealth << endl;
}

bool playState()
{
    // Create a char for play again option
    char playAgain;

    if (enemyHealth <= 0)
    {
        cout << "You have killed the troll and won!" << endl;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        // Reset enemy and player health if they want to play again
        if (playAgain == 'y' || playAgain == 'Y')
        {
            enemyHealth = 2000;
            playerHealth = 1000;
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (playerHealth <= 0)
    {
        cout << "You have been killed by the troll!" << endl;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        // Reset enemy and player health if they want to play again
        if (playAgain == 'y' || playAgain == 'Y')
        {
            enemyHealth = 2000;
            playerHealth = 1000;
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}
