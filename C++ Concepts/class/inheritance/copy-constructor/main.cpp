/*
 * main.cpp (copy-constructor example)
 * Purpose: Exercise the `base` and `Derived` classes to show how the
 * copy constructor is invoked when creating a derived object from a base
 * instance. Useful to demonstrate object copying and constructor messages.
 * Concepts used: copy constructor, object copying, inheritance, iostream.
 */
#include <iostream>
#include "classes.h"
using namespace std;

int main()
{
  base baseobject;
  baseobject.getters();
  Derived Derivedobject(baseobject);
  Derivedobject.print();
}
