#include <iostream>
#include <string>
using namespace std;

class Phone
{
    string _name = "";
    string _os = "";
    int _price = "";

public:
    Phone(); //default constructor
    Phone (const string &name, const string &os, const int &price); //parameterised constructor
    Phone (const Phone &); //copy constructor
    string getOSName()
    {
        return _os;
    }
    ~Phone(); //destructor
};

Phone::Phone() : _name(), _os(), _price()
{
    cout << "Default Connstructor Called!";
}

int main()
{
    Phone mi;

    cout << mi.getOSName() << endl;

    return 0;
}