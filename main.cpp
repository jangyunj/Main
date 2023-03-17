#include <iostream>

int main()
{
    // Do while loop - do something first, THEN repeat again if condition is true
    // An example where it's useful: At the end of a game, ask the user if he/she wants to play again and then repeat the game

    int number;

    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is " << number;
}