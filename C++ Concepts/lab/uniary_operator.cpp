/*
 * uniary_operator.cpp
 * Purpose: Demonstrates overloading of the unary operator for a user-defined
 * class. The example shows how operator- can be overloaded to modify object
 * state in a custom way.
 * Concepts used: operator overloading (unary), classes, and I/O.
 */
#include <iostream>
using namespace std;

class Num
{
    int x;

public:
    Num(int a) : x(a) {}
    void operator-() { x = -x / 5; }
    void show() { cout << x << endl; }
};

int main()
{
    Num n(5);
    -n;
    n.show();
    return 0;
}
