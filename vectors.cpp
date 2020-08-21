#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Corners
{
    float a, b, c, d;
};

// You can also use a class, but it is recommended to use a structure when there is no method inside a class!
// class Corners
// {
// public:
//     float a, b, c, d;
// }

ostream &operator<<(ostream &stream, const Corners &corners)
{
    stream << corners.a << " " << corners.b << " " << corners.c << " " << corners.d << endl;
    return stream;
}

int main()
{

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    //Method - 1 to print vectors using dereferencing
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << endl;
    }

    vector<Corners> corners;
    corners.push_back({1, 2, 3, 4});
    corners.push_back({5, 6, 7, 8});

    //Method - 2 to print vectors using dereferencing
    for (int i = 0; i < corners.size(); i++)
    {
        cout << corners[i];
    }

    return 0;
}