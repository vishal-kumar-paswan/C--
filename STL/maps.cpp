#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main()
{

    map<string, int> numbers;
    numbers["one"] = 1;
    numbers["two"] = 2;
    numbers["three"] = 3;
    numbers["four"] = 4;

    numbers.insert(make_pair("five", 5));

    for (auto &val : numbers)
    {
        cout << val.first << " : " << val.second << endl;
    }

    numbers.erase("two");
    cout << "Numbers after deleting two" << endl;

    for (auto i = numbers.begin();i!=numbers.end(); i++)
    {
        cout << i->first << " : " << i->second << endl;
    }

    return 0;
}