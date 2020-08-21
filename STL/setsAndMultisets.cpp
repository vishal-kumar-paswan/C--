#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

class User
{
public:
    string name;
    int score;
    bool operator<(const User &u) const
    {
        return score < u.score;
    }
    bool operator>(const User &u) const
    {
        return score > u.score;
    }
};
int main()
{

    set<int> myset = {12, 13, 14, 14, 12, 15};
    // multiset<int> myset = {12, 13, 14, 14, 12, 15};
    // set<int, less<>> myset = {12, 13, 14, 14, 12, 15};
    // set<int, less<>> myset = {12, 13, 14, 14, 12, 15};
    myset.insert(2);
    myset.insert(3);
    myset.insert(4);
    myset.insert(2);
    myset.insert(6);

    for (auto i = myset.begin(); i != myset.end(); i++)
    {
        cout << *i << " ";
    }

    cout << endl;

    for (const auto &v : myset)
    {
        cout << v << " ";
    }

    cout << endl;

    set<User , greater<>> myuserset = {{"Tom", 22}, {"Tim", 25}, {"Tom", 22}};

    for (const auto &v : myuserset)
    {
        cout << v.name << " ";
    }

    return 0;
}