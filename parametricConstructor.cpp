#include <iostream>
#include <string>
using namespace std;

class Phone
{
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    Phone();
    Phone(const string &name, const string &os, const int &price); //parameterised constructor
    string getOSName()
    {
        return _os;
    }
};

Phone::Phone() : _name(), _os(), _price()
{
    cout << "Default Connstructor Called!" << endl;
}

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price)
{
    cout << "This is parameteric constructor!" << endl;
}

int main()
{
    Phone mi;

    cout << mi.getOSName() << endl;

    Phone oneplus("OnePlus8", "Android", 799);

    cout << oneplus.getOSName() << endl;

    return 0;
}