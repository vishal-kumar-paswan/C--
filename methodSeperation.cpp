#include <iostream>
using namespace std;

class DataClass
{
public:
    int returnData();
};
int DataClass::returnData()
{
    return 3000;
}

int main()
{
    DataClass object;
    cout << object.returnData();
    return 0;
}