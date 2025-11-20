/*
 * signature.cpp
 * Purpose: Demonstrates various lambda signatures and ways to invoke them.
 * Description: Shows named lambdas, anonymous immediate-invoked lambdas,
 * lambdas with parameters, return types, and how to store them in `auto`.
 * Concepts used: lambda expressions, parameter passing, return types, immediate
 *                invocation, and std::function-like usage via `auto`.
 */
#include <iostream>
using namespace std;
int main()
{

    // calling lambda function with name
    auto fun = []()
    {
        cout << "Lambda function called With name\n";
    };
    fun();
    cout << "-----------------------------------------------------------------------------------------\n";
    // calling lambda funcion without name(directly after defenation)
    []()
    {
        cout << "Lambda function called Without name\n";
    }();
    cout << "-----------------------------------------------------------------------------------------\n";
    // Lambda function taking parameter
    [](int a, int b)
    {
        cout << "Lambda function called with paremeters(without name) : a =" << a << " b= " << b << endl;
        cout << "Mul : " << a * b << endl;
    }(23, 65);
    cout << "-----------------------------------------------------------------------------------------\n";
    // Lambda function taking parameter with name
    auto function = [](int a, int b)
    {
        cout << "Lambda function called with paremeters(with name)    : a =" << a << " b= " << b << endl;
        cout << "Mul : " << a * b << endl;
    };
    function(23, 45);
    cout << "-----------------------------------------------------------------------------------------\n";
    // Lambda function taking parameter with return type
    auto f1 = [](int a, int b) -> int
    {
        cout << "Lambda function called with return type(int)         : a =" << a << " b= " << b << endl;
        return a * b;
    };
    auto f2 = [](int a, int b) -> float
    {
        cout << "Lambda function called with return type(float)       : a =" << a << " b= " << b << endl;
        return (float)a / b;
    };
    auto f3 = [](string a, string b) -> string
    {
        cout << "Lambda function called with return type(string)      : a =" << a << " b= " << b << endl;
        return (a + b);
    };
    cout << "value of F1 : " << f1(23, 45) << endl
         << endl;
    cout << "Value of F2 : " << f2(43, 21) << endl
         << endl;
    cout << "Value of F3 : " << f3("Hello ,", "Tanish Here !") << endl;
}
