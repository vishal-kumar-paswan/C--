#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    double _lenght;
    double _breadth;

public:
    Rectangle(double l = 2.0, double b = 2.0)
    {
        _lenght = l;
        _breadth = b;
    }

    double Area()
    {
        return _lenght * _breadth;
    }

    int compare(Rectangle rectangle)
    {
        return this->Area() > rectangle.Area();
    }
};

int
main()
{
    Rectangle h1(3.0, 2.0);
    Rectangle h2(4.0, 4.0);

    if (h1.compare(h2))
        cout << "H1 is greater than H2";
    else
        cout << "H2 is greater than H1";
    return 0;
}