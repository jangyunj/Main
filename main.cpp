#include <iostream>

// local variable - declared inside a function or block{}
// global variable - declared outside of all functions
// local variable takes precedence over global var
// use "Scope Resolution Operator" to make global var take precedence ::
// avoid global var because it pollutes the global namespace and is less secure

int myNum = 3;

void printNum(); // this prints FIRST

int main()
{
    int myNum = 1;
    printNum();           // this prints SECOND
    std::cout << ::myNum; // scope resolution operator - allows global var to take precedence
}

void printNum()
{
    int myNum = 2;
    std::cout << myNum;
}