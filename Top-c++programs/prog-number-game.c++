/*write a c++ program of guess the number game*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl;

    do
    {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber)
            cout << "Too low! Try again." << endl;
        else if (guess > randomNumber)
            cout << "Too high! Try again." << endl;
        else
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;

    } while (guess != randomNumber);

    return 0;
}
