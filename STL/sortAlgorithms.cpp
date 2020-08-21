#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int numbers[6] = {3, 2, 6, 4, 7, 9};
    cout << "Unsorted values: " << endl;
    for (int n : numbers)
    {
        cout << n << " ";
    }

    sort(numbers, numbers + 6);

    cout << "Sorted values: " << endl;
    for (int n : numbers)
    {
        cout << n << " ";
    }
    return 0;
}