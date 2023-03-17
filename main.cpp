#include <iostream>

int main()
{
    // For loops are used when codes are executed for CERTAIN NUMBER of times
    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << '\n';
    }

    // decrement by 2
    for (int i = 10; i >= 0; i -= 2)
    {
        std::cout << i << '\n';
    }
}