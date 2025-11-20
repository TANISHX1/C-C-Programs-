/*
 * argument_type.cpp
 * Purpose: Demonstrates function templates and how template argument deduction
 * can be implicit or explicit.
 * Description: Defines a templated `subtract` function used with ints and
 * doubles. Shows both implicit type deduction and explicit template
 * specification. Concepts: templates, type deduction, iomanip for output.
 */
#include <iostream>
#include <iomanip>
using namespace std;

template <typename A>
A subtract(A a, A b)
{
    return a - b;
}

int main()
{
    int a = 10, b = 20;
    double x = 322.23, y = 23.3212;
    cout << setw(15) << "Value of A: " << setw(15) << a << setw(10) << "And B: " << b << endl;
    cout << setw(15) << "Value of X: " << setw(15) << x << setw(10) << "And Y: " << y << endl;
    cout << "\n----------------------------------------------------------------------------------\n\n";
    // type 1 : Implicit
    cout << "Subtraction(A & B): " << subtract(a, b) << endl;
    cout << "Subtraction(X & Y): " << subtract(x, y) << endl;
    cout << "\n----------------------------------------------------------------------------------\n\n";
    // type 2 : Explicit
    cout << "Subtraction(A & X): " << subtract<double>(a, x) << endl;
    cout << "Subtraction(B & Y): " << subtract<double>(b, y) << endl;
    cout << "\n----------------------------------------------------------------------------------\n\n";
}
