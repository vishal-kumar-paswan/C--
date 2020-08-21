#include <iostream>
using namespace std;

class DataClass
{
    int _data;

public:
    void setData(const int &newData)
    {
        _data = newData;
    }
    int getData()
    {
        return _data;
    }
};

int main()
{
    DataClass object;
    object.setData(300);
    int returnedData = object.getData();
    cout << returnedData << endl;
    return 0;
}