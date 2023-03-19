#include <iostream>

double square(double length);
double cube(double length);

int main()
{
    double length;
    std::cout << "Enter length: ";
    std::cin >> length;

    double area = square(length);
    double volume = cube(length);
    std::cout << "The area of a square is: " << area << "cm^2\n";
    std::cout << "The volume of a square is: " << volume << "cm^3\n";
}

double square(double length)
{
    return length * length;
}
double cube(double length)
{
    return length * length * length;
}