#include <iostream>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        std::cout << i << '\n';
    }
    std::cout << "Happy New Year";

    // increment by 2
    for (int i = 1; i <= 10; i += 2)
    {
        std::cout << i << '\n';
    }
    std::cout << "Happy New Year";
}