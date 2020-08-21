#include <iostream>
#include <algorithm>
#include <forward_list>

using namespace std;

int main()
{

    forward_list<int> flist;
    flist.push_front(10);
    flist.push_front(12);
    flist.push_front(14);
    flist.push_front(16);

    cout << flist.front() << endl;;

    flist.pop_front();
    cout << flist.front() << endl;

    while (!flist.empty())
    {
        cout << flist.front() << " ";
        flist.pop_front();
    }

    cout << " ";

    return 0;
}