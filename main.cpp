#include <iostream>
#include <cmath>

//--------Let's calculate the hypothenuse of a triangle--------
int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter length of side A: ";
    std::cin >> a;

    std::cout << "Enter length of side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Length of side C: " << c;
}