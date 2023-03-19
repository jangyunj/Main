#include <iostream>
#include <cmath>

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100 + 1;

    do
    {
        std::cout << "Enter a guess between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if (guess < num)
        {
            std::cout << "Guess is too low\n";
        }
        else if (guess > num)
        {
            std::cout << "Guess is too high\n";
        }
        else
        {
            std::cout << "Correct! The number of attempts was " << tries;
        }

    } while (guess != num);
}