#include <iostream>
#include <string>
using namespace std;

class One
{
public:
    virtual void intro()
    {
        cout << "one" << endl;
    }
};

class Two : public One
{
public:
    void intro()
    {
        cout << "two" << endl;
    }
};

class Three : public One
{
public:
    void intro()
    {
        cout << "three" << endl;
    }
};

int main()
{
    One *one;
    Two two;
    Three three;
    //one.intro();
    two.intro();
    three.intro();

    one=&two;
    one->intro();

    one=&three;
    one->intro();

    return 0;
}