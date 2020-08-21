#include <iostream>
#include <string>
using namespace std;

class Man
{

    string _name;
    int _age;
    Man(){};

protected:
    Man(const string &name, const int &age) : _name(name), _age(age) {}
    void run()
    {
        cout << "I can run!" << endl;
    }

public:
    void sayName() const;
};

void Man::sayName() const
{
    cout << "My name is " << _name << endl;
    cout << "Age is " << _age << endl;
}

class SuperMan : public Man
{
    bool flight;

public:
    SuperMan(string name) : Man(name, 26){};
    void run()
    {
        cout << "I can run at light speed!" << endl;
    }
};

class SpiderMan : public Man
{
    bool webbing;

public:
    SpiderMan(string name) : Man(name, 19){};
    void run()
    {
        cout << "I can run at normal speed!" << endl;
    }
};

int main()
{
    SuperMan clark("kent");
    clark.sayName();
    clark.run();

    SpiderMan peter ("peter");
    peter.sayName();
    peter.run();
    return 0;
}