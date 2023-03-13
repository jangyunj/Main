#include <iostream>
using namespace std;

namespace first
{
    int x = 0;
}
namespace second
{
    int x = 1;
}
int main()
{
    int x = 2;

    cout << first::x;  //:: is scope resolution operator
    cout << second::x; // entities can have the same name, as long as they are in a different namespace

    //---you can also do---
    using namespace first;

    cout << x;
}