#include <iostream>
#include <stack>
using namespace std;

template <class T>
void display(stack<T> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s1, s2, s3;
    for (int i = 0; i < 100; i++)
    {
        s1.push(i);
    }
    cout << s1.size() << endl;
    cout << s1.top() << endl;
    display(s1);
    s2 = s1; // we can copy stack like this but data should be same
    display(s2);
    cout << endl;
    s3.swap(s1); // data should be same
    display(s3);
    cout << endl;

    return 0;
}