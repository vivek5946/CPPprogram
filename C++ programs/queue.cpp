#include <iostream>
#include <queue>
using namespace std;
void printQ(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
queue<int> removemultiplesof3(queue<int> q)
{
    queue<int> nq;
    while (!q.empty())
    {
        if (q.front() % 3 != 0)
        {
            nq.push(q.front());
        }
        q.pop();
    }
    return nq;
}
int main()
{
    queue<int> q1;
    for (int i = 1; i < 100; i = i + 10)
    {
        q1.push(i);
    }
    cout << q1.size() << endl;
    printQ(q1);
    cout << endl;
    q1 = removemultiplesof3(q1);
    printQ(q1);
    return 0;
}
