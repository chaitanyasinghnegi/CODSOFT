#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //time as seed for random number generator
    srand(((int)time(nullptr)));
    //setting range of number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int userInput;
    int attemptCount = 0;

    cout << "Number Guessing Game!\n";
    cout << "The number is between 1 and 100\n\n";
    do
    {
        cout << "Enter guess: ";
        cin >> userInput;
        if (userInput < randomNumber)
        {
            cout << "Too low! Try again.\n";
        }
        else if (userInput > randomNumber)
        {
            cout << "Too high! Try again.\n";
        }
        else
        {
            cout << "Congratulations! You guessed in " << attemptCount + 1 << " attempts.\n";
        }
        //adding to attempt count after every run
        attemptCount++;

    } while (userInput != randomNumber);
    return 0;
}
