#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char choice;
    int outer_loop = 1;

    while (outer_loop)
    {

        srand(time(0));
        int guessing_number = rand() % 20 + 1;
        int user_number;
        int inner_loop = 1;

        while (inner_loop)
        {
            cout << "Guess a number between 1-20: ";
            cin >> user_number;

            if (user_number == guessing_number)
            {
                cout << "Congratulations!! You have guessed the right number\n\n";
                inner_loop = 0;
            }
            else if (user_number < guessing_number)
            {
                cout << "Guess a bigger number\n\n";
            }
            else if (user_number > guessing_number)
            {
                cout << "Guess a smaller number\n\n";
            }
        }
        cout << "**************************************************************************\n";
        cout << "Do you want to play again?(y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            outer_loop = 0;
            cout << "GAME ENDED.........!!!!";
        }
    }
    return 0;
}