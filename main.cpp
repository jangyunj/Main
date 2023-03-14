#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t; // text_t is an identifier
// typedef int number_t;

//---SAME AS---
using text_t = std::string;
using number_t = int;

int main()
{
    text_t firstName = "Bro";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';
}

/*
endl vs. \n
endl - flushes the buffer.
\n - new line

To flush, means to empty the buffer. Now, buffer is temporary storage area for storing data. Both endl and \n can be used to print newline character but there is minor difference between these two : In case of endl, buffer is cleared by usage of internal call to flush the buffer.
*/
