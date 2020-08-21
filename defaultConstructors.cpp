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
    string getOSName()
    {
        return _os;
    }
};

Phone::Phone() : _name(), _os("Default OS"), _price()
{
    cout << "Default Connstructor Called!" << endl;
}

int main()
{
    Phone mi;

    cout << mi.getOSName() << endl;

    return 0;
}