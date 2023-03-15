#include <iostream>

// cout << (insertion operator)
// cint >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout << "What is your name? ";
    std::cin >> name; // stores user input to this variable

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
}
