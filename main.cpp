#include <iostream>

int main()
{
    // Nested loops - For 3 times, count upto 10
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
}
