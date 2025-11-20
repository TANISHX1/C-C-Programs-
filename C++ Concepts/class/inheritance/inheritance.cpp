/*
 * inheritance.cpp
 * Purpose: Demonstrates simple class inheritance and method chaining across
 * base/derived classes.
 * Description: `secondary` derives from `primary` (defined in classdef.h)
 * and calls a sequence of methods inherited from the base. Illustrates
 * public inheritance and reuse of base class functionality.
 * Concepts used: inheritance (public), class derivation, method chaining.
 */
#include <iostream>
#include "classdef.h"
using namespace std;

class secondary : public primary
{
public:
    secondary *get_data()
    {
        name_And_Place()->Age()->mobile_number()->print();
        return this;
    }
};

int main()
{
    secondary obj;
    obj.get_data();
    return 0;
}
