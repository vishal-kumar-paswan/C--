#include <iostream>
#include <string>
using namespace std;

int main()
{

    [] {};                                             // Empty lambda
    [] {}();                                           // Lambda calling itself
    [] { cout << "Hello Lambda!" << endl; }();         // Lambda printing statements
    []() { return 100; };                              // Lambda returning value
    auto sum = [](auto a, auto b) { return (a + b); }; // Lambda taking atrguments and returning the sum
    cout << "Sum of 10 and 20 is " << sum(10, 20) << endl;
    cout << "Sum of 10.10 and 20.20 is " << sum(10.10, 20.20) << endl;
    string a = "Vis", b = "hal";
    cout << sum(a, b) << endl;
    return 0;
}