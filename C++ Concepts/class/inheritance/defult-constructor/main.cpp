/*
 * main.cpp (default-constructor / inheritance example)
 * Purpose: Runs the `result` class demo which inherits from `data` and
 * collects user inputs, then prints a formatted report. Shows use of chained
 * input calls and derived-class behavior.
 * Concepts used: inheritance, constructor behavior, method chaining, i/o.
 */
#include <iostream>
// #include "get-data.h"
#include "out-data.h"
using namespace std;

int main()
{

    result obj;
    obj.LName();
    obj.Laddress();
    obj.LPersonULM();
    obj.LAge_Adult();
    obj.print();
}
