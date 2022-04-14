#include <iostream>
#include <list>
using namespace std;

void displaylist(list<int> l)
{
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l1, l2;
    for (int i = 1; i <= 10; i++)
    {
        l1.push_back(i);
    }
    for (int i = 5; i <= 15; i++)
    {
        l2.push_back(i);
    }

    displaylist(l1);
    cout << l1.front() << endl
         << l1.back() << endl;
    // l1={1,2,----10}
    // l2= {5,6,7,-----15}
    l1.pop_front();
    l2.pop_back();
    displaylist(l1);
    displaylist(l2);
    l1.reverse();
    displaylist(l1);
    cout << endl;
    l1.swap(l2);
    displaylist(l1);
    displaylist(l2);
    cout << endl;
    list<int> l3(10, 22); // here first value denote size and second value store 1o times
                          // like this l3=={22,22,22,22,-----22}
    displaylist(l3);
    l3.resize(7);
    displaylist(l3);
    l3.assign(l2.begin(), l2.end());
    displaylist(l3);

    list<int> l4(l3);
    cout << (l3 == l4) << endl;   // true
    cout << (l1 > l4) << endl;    // false
    l4.insert(l4.begin(), 2, 10); // here element are inserting before list our earlier list is {10,9,8,7,----2}
    // now we add two 10 at beginning then list will be {10 10 10 9 8 7 6 5 4 3 2}
    displaylist(l4);
    l4.clear();
    cout << l4.size() << endl;

    cout << !l4.empty() << endl;

    return 0;
}