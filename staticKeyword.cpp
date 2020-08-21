#include <iostream>
using namespace std;

int func()
{
    static int n = 0;
    return ++n;
}

int main()
{
    cout << func() << endl;
    cout << func() << endl;
    cout << func() << endl;
    cout << func() << endl;
    cout << func() << endl;
    return 0;
}