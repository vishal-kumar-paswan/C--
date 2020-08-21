#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    queue<int> myqueue;
    myqueue.push(10);
    myqueue.push(12);
    myqueue.push(14);
    myqueue.push(16);

    cout << myqueue.front() << endl;
    cout << myqueue.back() << endl;

    myqueue.pop();
    cout << myqueue.front() << endl;
    cout << myqueue.back() << endl;

    while (!myqueue.empty())
    {
        cout << myqueue.front() << " ";
        myqueue.pop();
    }
    cout << "\n";
    cout << "Outside!" << endl;
    cout << myqueue.front() << endl;

    priority_queue<int> pqueue;
    pqueue.push(10);
    pqueue.push(40);
    pqueue.push(50);
    pqueue.push(5);

    while (!pqueue.empty())
    {
        cout << pqueue.top() << " ";
        pqueue.pop();
    }
    cout << "\n";

    return 0;
}