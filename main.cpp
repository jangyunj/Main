#include <iostream>

// overloaded functions -

// functions with the same name can be used. however, you need a different set of parameters
// function signature = function name + parameter
// each function signature needs to be unique

void bakePizza(std::string topping1, std::string topping2);

int main()
{
    bakePizza("pepperoni", "mushrooms");
}

void bakePizza(std::string topping1)
{
    std::cout << "I would like " << topping1;
}

void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "I would like " << topping1 << " and " << topping2 << " pizza";
}
