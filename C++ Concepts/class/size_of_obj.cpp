/*
 * size_of_obj.cpp
 * Purpose: Illustrates use of `sizeof` on a user-defined object to inspect
 * memory size and class layout effects (member types order and padding).
 * Description: Defines a simple `student` class and prints `sizeof` of an
 * instance. Useful for understanding memory footprint of classes.
 * Concepts used: classes, constructors, destructor, sizeof operator.
 */
#include <iostream>
using namespace std;

class student
{
public:
    int division;
    int age;
    string name;
    student(string name, int a, int b) : name(name), age(a), division(b) {};
    ~student() {}
};

int main()
{
    student student1("Tanish", 20, 12);
    cout << "Size of class [Student] : " << sizeof(student1) << endl;
}
