#include <iostream>

int main()
{
    std::string name;

    // While is like an if statement. it will continue as long as the condition is true and will exit when false.

    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    // Example of infinite loop:
    while (1 == 1)
    {
        std::cout << "Help! I'm stuck in an infinite loop!";
    }

    std::cout << "Hello " << name;
}