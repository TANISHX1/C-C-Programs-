/*
 * complex_friend.cpp
 * Purpose: Demonstrates operator overloading using friend functions for a
 * Complex number class (addition, subtraction, multiplication).
 * Description: Defines non-member friend operators so they can access private
 * members directly. Useful to show how friend operator functions are declared
 * and implemented.
 * Concepts used: operator overloading, friend functions, classes, and I/O.
 */
#include <iostream>
using namespace std;

class Complex
{
    float r, i;

public:
    Complex(float a = 0, float b = 0) : r(a), i(b) {}

    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex, Complex);
    friend Complex operator*(Complex, Complex);

    void show()
    {
        cout << r << " + " << i << "i\n";
    }
};

Complex operator+(Complex a, Complex b)
{
    return Complex(a.r + b.r, a.i + b.i);
}

Complex operator-(Complex a, Complex b)
{
    return Complex(a.r - b.r, a.i - b.i);
}

Complex operator*(Complex a, Complex b)
{
    return Complex(a.r * b.r - a.i * b.i, a.r * b.i + a.i * b.r);
}

int main()
{
    Complex c1(3, 2), c2(1, 4);

    Complex c_add = c1 + c2;
    Complex c_sub = c1 - c2;
    Complex c_mul = c1 * c2;

    cout << "Sum: ";
    c_add.show();
    cout << "Difference: ";
    c_sub.show();
    cout << "Product: ";
    c_mul.show();

    return 0;
}
