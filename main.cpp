#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t; // text_t is an identifier

int main()
{
    std::string firstName;

    //---OR---
    text_t firstName = "Bro"; // replace the datatype with the new identifier

    std::cout << firstName << '\n';
}
