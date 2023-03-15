#include <iostream>

int main()
{
    int correct = 8;
    int questions = 10;

    double score = correct / (double)questions * 100; // type conversion is used here so that division will return a double
    std::cout << score << "%";
}