/*
 * main.cpp
 * Purpose: Demo program that exercises the `Remover` utility to remove
 * elements from a `std::vector` and shows multiple ways to call member
 * functions (direct object, pointer to object, dereferenced pointer).
 * Concepts used: std::vector, classes, object vs pointer invocation, iostream.
 */
#include <iostream>
#include "element.h"
using namespace std;

int main()
{
    vector<int> alpha{2, 3, 4, 5, 7, 5, 3, 2, 4, 7};
    Remover obj;
    cout << "\n----------------------------------------------------------------\n";
    cout << "Normal using ( obj.removeElement(alpha,2)): \n";
    cout << "-----------------------------------------------\n";
    cout << obj.removeElement(alpha, 2) << endl;
    // pointer to Static object
    Remover *ptr = &obj;
    cout << "\n----------------------------------------------------------------\n";
    cout << "Normal using ((*ptr).removeElement(alpha,7)): \n";
    cout << "-----------------------------------------------\n";
    cout << (*ptr).removeElement(alpha, 7) << endl;
    cout << "\n----------------------------------------------------------------\n";
    cout << "Normal using (ptr->removeElement(alpha,7)): \n";
    cout << "-----------------------------------------------\n";
    cout << ptr->removeElement(alpha, 7) << endl;
}
