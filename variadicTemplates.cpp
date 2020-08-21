#include <iostream>
#include <string>
using namespace std;

template <typename T>
void func(T t)
{
    cout << "func1 " << t << endl;
}

template <typename T, typename... Args>
void func(T t, Args... args)
{
    cout << "func2 " << t << endl;
    func(args...);
}

int main()
{
    string name = "Vishal";
    func(1, 2, 3, 4, 5.5, name);
    return 0;
}