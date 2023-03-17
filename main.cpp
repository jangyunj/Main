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

    // if (name.empty()) //this is boolean
    // {
    //     std::cout << "You left the field blank";
    // }
    // else
    // {
    //     std::cout << "Hello " << name;
    // }

    // name.append("@gmail.com"); // appends something

    // std::cout << "Your username is " << name;

    // name.clear(); // clears the name

    // std::cout << "Hello " << name;

    std::cout << name.at(0); // 0 index

    std::cout << name.at(1); // 1 index

    name.insert(0, "@"); // insert at this index

    std::cout << name;
}