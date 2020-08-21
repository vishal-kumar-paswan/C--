#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int numbers[6] = {3, 2, 6, 4, 7, 9};
    cout << "Values are: " << endl;
    for (int n : numbers)
    {
        cout << n << endl;
    }

    sort(numbers, numbers + 6);

    if (binary_search(numbers, numbers + 6, 7))
        cout << "Element found!";
    else
        cout << "Element not found!";

    return 0;
}