/*
 * capture_list.cpp
 * Purpose: Demonstrates capture lists in C++ lambda expressions.
 * Description: Shows capture-by-value, capture-by-reference, and capture-all
 * forms. Illustrates how lambdas can access variables from the enclosing
 * scope and the differences between copying vs referencing captured data.
 * Concepts used: lambda expressions, capture lists ([=], [&], [a,b]), std::setw,
 *                and immediate invocation of lambdas.
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int a{5}, b{5};
   std::cout << "\n------------------------------------------------------------------------------\n\n";
   cout << setw(15) << "Address of A: " << setw(15) << &a << setw(15) << "And B: " << setw(15) << &b << endl;
   cout << setw(15) << "Value of A: " << setw(15) << a << setw(15) << " And B: " << setw(15) << b << endl;
   std::cout << "\n------------------------------------------------------------------------------\n\n";
   std::cout << left;
   // capturing by value
   cout << "\t\t\t\t\tCaptured by value\n\n";
   auto fx = [a, b]() -> int
   {
      // here we passed A,B o capture and being used in lambda function
      // here copy of a,b is passed
      std::cout << setw(15) << "(  Inside ) " << setw(20) << "Value of A: " << setw(15) << a << setw(20) << "And B: " << b << std::endl;
   };
   for (size_t i{}; i < 5; i++, ++a, ++b)
   {
      std::cout << setw(15) << "( Outside ) " << setw(20) << "Value of A: " << setw(15) << a << setw(20) << "And B: " << b << std::endl;
      fx();
   }
   a = 5, b = 5;

   std::cout << "\n------------------------------------------------------------------------------\n\n";
   cout << "\t\t\t\t\tCapture by reference\n\n";
   // capturing by reference
   auto fy = [&a, &b]() -> int
   {
      std::cout << setw(15) << "(  Inside ) " << setw(20) << "Value of A: " << setw(15) << a << setw(20) << "And B: " << b << std::endl;
   };
   for (size_t i{}; i < 5; i++, ++a, ++b)
   {
      std::cout << setw(15) << "( Outside ) " << setw(20) << "Value of A: " << setw(15) << a << setw(20) << "And B: " << b << std::endl;
      fy();
   }
   std::cout << "\n------------------------------------------------------------------------------\n\n";
   cout << "\t\t\tCapture all context (by Value) \n\n";
   [=]()
   {
      std::cout << setw(15) << "Address of " << setw(15) << " A: " << setw(15) << &a << setw(15) << "And B: " << &b << std::endl;
   }();
   std::cout << "\n------------------------------------------------------------------------------\n\n";
   cout << "\t\t\tCapture all context (by reference) \n\n";
   [&]()
   {
      std::cout << setw(15) << "Address of " << setw(15) << " A: " << setw(15) << &a << setw(15) << "And B: " << &b << std::endl;
   }();
}