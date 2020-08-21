#include <iostream>
#include <string>
using namespace std;

class User
{
    int data = 10;

public:
    string name = "Vishal";
    void classMethod()
    {
        cout << "Name: " << name;
    }
    void setData(int &newData)
    {
        data = newData;
    }
    int getData()
    {
        return data; 
    }
};

int main()
{
    User vishal;
    vishal.name = "Sonu";
    vishal.classMethod();
}