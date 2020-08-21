#include <iostream>
using namespace std;

void printHello()
{
    cout << "Hello, World!";
}

int main()
{
    void (*pointsToPrintHello)() = printHello;
    pointsToPrintHello() << endl;
    (*pointsToPrintHello)() << endl;
    return 0;
}