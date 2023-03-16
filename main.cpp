#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You are 18 or over";
    }
    else if (age < 0)
    {
        std::cout << "Invalid number";
    }
    else
    {
        std::cout << "You are under 18";
    }
}