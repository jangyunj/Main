#include <iostream>
#include <ctime>

int main()
{
    // pseudo-random: not truly random but close (will work for rolling dice example)

    srand(time(NULL));

    int num = (rand() % 6) + 1;

    std::cout << num;
}