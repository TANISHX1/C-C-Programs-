/*
 * constructor_destructor.cpp
 * Purpose: Demonstrates constructor and destructor behavior with dynamic memory.
 * Description: The `parent` class allocates an `int` on the heap in the constructor
 * and frees it in the destructor to show lifetime management and RAII-like
 * behavior. Prints messages to illustrate construction and destruction order.
 * Concepts used: constructors, destructors, dynamic allocation (new/delete),
 *                resource cleanup, and basic I/O.
 */
#include <iostream>
using namespace std;
class parent
{
public:
    int *ptr;
    parent()
    {
        ptr = new int;
        cout << "Constructor is called \n";
        *ptr = 123;
        cout << *ptr << endl;
    }
    ~parent()
    {
        delete ptr;
        cout << *ptr << endl;
        ptr = nullptr;
        cout << "Destructor is called\n";
    }
};
int main()
{
    parent obj;
    return 0;
}
