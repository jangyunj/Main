#include <iostream>

int main()
{
    // int grade = 75;

    // if (grade >= 60) {
    //     std::cout << "You passed!";
    // }
    // else {
    //     std::cout << "You failed.";
    // }

    //********** condition ? expression1 : expression2 **********
    int grade;

    std::cout << "Enter your grade for this year: ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "You passed!" : std::cout << "You failed.";
}