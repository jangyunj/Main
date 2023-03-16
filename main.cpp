#include <iostream>

int main()
{
    int temp;
    bool sunny = false;
    // std::cout << "Enter the temperature in Celcius: ";
    // std::cin >> temp;

    // if (temp > 0 && temp < 30){
    //     std::cout << "The temperature is good";
    // } else {
    //     std::cout << "The temperature is bad";
    // }

    // if (temp <= 0 || temp >= 30){
    //     std::cout << "The temperature is good";
    // } else {
    //     std::cout << "The temperature is bad";
    // }

    if (sunny)
    {
        std::cout << "It is sunny today";
    }
    else
    {
        std::cout << "It is cloudy today";
    }

    //--OR--
    if (!sunny)
    {
        std::cout << "It is cloudy today";
    }
    else
    {
        std::cout << "It is sunny today";
    }
}