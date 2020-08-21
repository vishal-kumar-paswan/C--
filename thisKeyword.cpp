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
    Phone(const Phone &);
    ~Phone();
    string getOSName()
    {
        return _os;
    }
    string getDeviceName()
    {
        return _name;
    }
    int getPrice()
    {
        cout << "Value of the object oneplus is " << this << endl;
        return _price;
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

Phone::Phone(const Phone &values)
{
    cout << "Override copy constructor!" << endl;
    _name = "Modified-" + values._name;
    _os = "Skinned-" + values._os;
    _price = values._price;
}

Phone::~Phone()
{
    cout << "Destructor called for " << _name.c_str() << endl;
}

int main()
{
    Phone mi;
    cout << mi.getOSName() << endl;

    Phone oneplus("OnePlus8", "Android", 799);
    cout << oneplus.getOSName() << endl;
    cout << "Value of the object oneplus is " << &oneplus << endl;
    cout << oneplus.getPrice() << endl;


    Phone samsung = oneplus;
    cout << samsung.getOSName() << endl;
    cout << samsung.getDeviceName() << endl;

    return 0;
}