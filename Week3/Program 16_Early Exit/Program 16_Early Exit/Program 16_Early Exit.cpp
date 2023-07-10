#include <iostream>
using namespace std;

int main()
{
    int playerLife = 100;
    int damage;
    int numQuestions = 10;
    int i;

    cout << "Player Life: " << playerLife << endl;

    for (i = 1; i <= numQuestions && playerLife >= 0; i++)
    {
        cout << "Question " << i << ": How much damage shall I deal?" << endl;
        cin >> damage;

        playerLife -= damage;
    }

    if (playerLife < 0)
    {
        cout << "Early end. Player Died!" << endl;
    }
    else
    {
        cout << "All questions asked. Player survived!" << endl;
    }

    return 0;
}
