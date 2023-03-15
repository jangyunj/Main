#include <iostream>

// cout << (insertion operator)
// cint >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "What is your full name? ";
    std::getline(std::cin >> std::ws, name); // getline accepts input with spaces in between
                                             // ws eliminates white space that comes before

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
}
