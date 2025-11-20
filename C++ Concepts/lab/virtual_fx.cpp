/*
 * virtual_fx.cpp
 * Purpose: Demonstrates runtime polymorphism using virtual functions.
 * Description: Defines a base class `Shape` with a virtual `draw` method and
 * derived classes `Circle` and `Square` that override `draw`. Shows how a
 * base-class pointer can call derived overrides at runtime.
 * Concepts used: virtual functions, polymorphism, inheritance, and pointers.
 */
#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }
};

// Another derived class
class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a square" << endl;
    }
};

int main()
{
    Shape *s1;
    Circle circleObj;
    Square squareObj;

    s1 = &circleObj;
    s1->draw(); // Output: Drawing a circle

    s1 = &squareObj;
    s1->draw(); // Output: Drawing a square

    return 0;
}
