#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    vector<int> nums;
    vector<string> heroes{"Batman", "Flash", "Superman", "Robin"};

    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    for (int i = 0; i <= 5; i++)
    {
        nums.push_back(i);
    }

    cout << nums.size() << endl;
    cout << nums.capacity() << endl;
    cout << nums.max_size() << endl;
    cout << nums.empty() << endl;
    
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}