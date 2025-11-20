/*
 * this_ptr.cpp
 * Purpose: Demonstrates the use of the `this` pointer inside member functions
 * and in constructors/destructors to identify the current object instance.
 * Description: Shows constructor initialization, printing the object's address,
 * updating members via `this`, and destructor messages. Useful for understanding
 * object identity and member access.
 * Concepts used: `this` pointer, initializer list, constructors, destructors,
 *                iomanip for formatted output.
 */
#include <iostream>
#include <iomanip>

using namespace std;
class primary
{
    int num1;
    int num2;
    string name;

public:
    primary(int num1, int num2, string name) : num1(num1), num2(num2), name(name)
    {
        cout << left;
        cout << "Constructor is called for " << name << " At : " << this << endl;
        this->num1 = num1 + 1;
        this->num2 -= 1;
    }
    void get_name(string name)
    {
        this->name = name;
        cout << "Name updated! \n";
        cout << "name : " << name << endl;
    }
    void print()
    {
        cout << '[' << this << "] " << setw(10) << this->name << " , num1 : " << this->num1 << ",num2 : " << this->num2 << endl;
    }
    ~primary()
    {
        cout << "Destructor is called for " << name << " At : " << this << endl;
    }
};
int main()
{
    primary obj(22, 22, "Tanish");
    obj.print();
    cout << "--------------------------------------------------\n\n";
    obj.get_name("i am void");
    obj.print();
    cout << "Done!" << endl;
    return 0;
}
