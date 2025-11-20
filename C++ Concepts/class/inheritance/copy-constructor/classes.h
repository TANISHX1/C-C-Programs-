/*
 * classes.h
 * Purpose: Demonstrates copy constructor behavior and derived-class construction.
 * Description: Defines a `base` class with a user-defined copy constructor and a
 * `Derived` class that invokes the base copy constructor from its initializer
 * list. Shows object copying, constructor/destructor messages and simple
 * inheritance usage.
 * Concepts used: copy constructor, constructors/destructors, public inheritance,
 *                initializer list, and std::cout.
 */
#include <iostream>
using namespace std;

class base
{
public:
    int x{}, y{}, z{};
    base()
    {
        cout << "BAse class constructor is called\n";
    }
    base(base &obj)
    {
        cout << "Base class Copy constructor is called \n";
        x = obj.x;
        y = obj.y;
        z = obj.z;
    }
    void getters()
    {
        cout << "Enter X :   ";
        cin >> x;
        cout << "Enter Y :   ";
        cin >> y;
        cout << "Enter Z :   ";
        cin >> z;
    }
    ~base()
    {
        cout << "Base class Destructor is called\n";
    }
};

class Derived : public base
{
public:
    float num;
    Derived(base &obj) : base(obj)
    {
        cout << "Derived class constrictor is called\n";
        num = (obj.x + obj.y) / obj.z;
    }

    void print()
    {
        cout << "Value of num : " << num << endl;
    }
};
