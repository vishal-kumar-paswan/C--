#include <iostream>
using namespace std;

class DataClass
{
public:
    int returnData() const;
};
int DataClass::returnData() const
{
    return 3000;
}

int main()
{
    const DataClass object;
    cout << object.returnData();
    return 0;
}