#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{

    deque<int> nums;
    nums.push_back(10);
    nums.push_front(20);
    nums.push_front(30);
    nums.push_front(40);

    cout << nums.size() << endl;
    cout << nums.at(2) << endl;

    nums.pop_back();
    nums.pop_front();

    for (auto n : nums)
    {
        cout << n << " ";
    }

    return 0;
}