#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6;
    cout << "Biwise AND value of 5 and 6 is:" << (a & b) << endl;
    cout << "Biwise OR value of 5 and 6 is:" << (a | b) << endl;
    cout << "Biwise XOR value of 5 and 6 is:" << (a ^ b) << endl;
    cout << "Biwise Left Shift value of 5 and 6 is:" << (a << b) << endl;
    cout << "Biwise Right Shift of 5 and 6 is:" << (a >> b) << endl;
    return 0;
}