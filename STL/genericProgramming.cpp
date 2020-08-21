#include <iostream>
using namespace std;

template <typename T>
T getBiggerValue(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    int val1 = getBiggerValue(10, 20);
    double val2 = getBiggerValue(10.10, 20.20);
    cout << "Integer Greater Value: " << val1 << endl;
    cout << "Double Greater Value: " << val2 << endl;
    return 0;
}