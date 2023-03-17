#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // to accomodate for possible space

    // if (name.length() > 12)
    // {
    //     std::cout << "Your name is too long";
    // }
    // else
    // {
    //     std::cout << "Welcome to the class " << name;
    // }

    if (name.empty())
    {
        std::cout << "You left the field blank";
    }
    else
    {
        std::cout << "Hello " << name;
    }
}