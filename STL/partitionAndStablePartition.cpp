#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> myint = {1, 9, 8, 6, 3, 2, 4, 7, 0, 5};
    cout << "Vector values: " << endl;
    for (int n : myint)
    {
        cout << n << " ";
    }

    partition(myint.begin(), myint.end(), [](auto n) { return n % 2 == 0; });
    cout << "Vector values: " << endl;
    for (int n : myint)
    {
        cout << n << " ";
    }

    return 0;
}