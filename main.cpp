#include <iostream>
#include <cmath>

int main()
{
    double x = 3.14;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 3);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x); //rounds up
    z = floor(x); // always rounds down

    std::cout << z;
}
