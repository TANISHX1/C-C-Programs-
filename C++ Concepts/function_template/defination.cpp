/*
 * defination.cpp
 * Purpose: Demonstrates a simple template function that operates on pointers
 * and returns the greater pointer (by address comparison) as a generic example.
 * Description: Uses templates with pointer types and shows use of `auto` to
 * capture the returned pointer. Concepts: templates, pointers, auto type.
 */
#include <iostream>
using namespace std;

template <typename T>
T joining(T a, T b)
{
   return a > b ? a : b;
}

int main()
{
   // string a="tanish Shivhare ,\n",b="Is a Good body\n";
   int a = 4, b = 876;
   int *p_x{&a};
   int *p_y{&b};
   auto c = joining(p_x, p_y);
   cout << "Address of A     : " << &a << "  Value      : " << a << endl;
   cout << "Address of B     : " << &b << "  Value      : " << b << endl;
   cout << "Address at C     : " << c << "  Value of C : " << *c << endl;
}
