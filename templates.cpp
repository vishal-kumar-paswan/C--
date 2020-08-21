#include <iostream>
using namespace std;

template <typename T>
T addNumber(T a, T b)
{
    return a + b;
}

int main()
{
    cout << addNumber(5, 6) << endl;
    cout << addNumber(5.6, 6.1) << endl;
}