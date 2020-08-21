#include <iostream>
using namespace std;

void PrintValue(int a)
{
    cout << a << endl;
}

void PrintValue(double a)
{
    cout << a << endl;
}

void PrintValue(int *a)
{
    cout << a << endl;
}

int main()
{
    PrintValue(5);
    PrintValue(5.5);
    PrintValue(nullptr);
}