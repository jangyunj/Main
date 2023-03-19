#include <iostream>

std::string concatStrings(std::string string1, std::string string2);

int main()
{
    std::string firstName = "Yun";
    std::string lastName = "Jang";
    std::string fullName = concatStrings(firstName, lastName); // arguments

    std::cout << "Hello " << fullName;
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}