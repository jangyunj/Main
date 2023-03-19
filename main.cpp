#include <iostream>

// You can declare before the main function, then define them later

// Declaring fx
void happyBirthday(std::string name, int age); // fx declaration

// Calling fx
int main()
{
    std::string name = "Bro";
    int age = 21;
    happyBirthday(name, age); // argument
}

// Defining fx
void happyBirthday(std::string name, int age) // parameters
{
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old";
}
