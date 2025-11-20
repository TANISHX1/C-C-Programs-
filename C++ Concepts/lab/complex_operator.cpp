/*
 * complex_operator.cpp
 * Purpose: Demonstrates member operator overloading for a Complex class.
 * Description: Implements operator+ as a member function and shows how
 * objects of user-defined types can be manipulated using operators.
 * Concepts used: operator overloading (member), classes, and I/O.
 */
#include <iostream>
using namespace std;

class Complex
{
    float r, i;

public:
    Complex(float a = 0, float b = 0) : r(a), i(b) {}
    Complex operator+(Complex c)
    {
        return Complex(r + c.r, i + c.i);
    }
    void show()
    {
        cout << r << " + " << i << "i\n";
    }
};

int main()
{
    Complex c1(2, 3), c2(4, 5), c3;
    c3 = c1 + c2;
    c3.show();
    return 0;
}
