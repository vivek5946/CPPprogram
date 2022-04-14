#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class myclass
{
    int a;

public:
    myclass(int x)
    {
        a = x;
        cout << "constructor:" << a << endl;
    }
    ~myclass()
    {
        cout << "destructor:" << a << endl;
    }
    myclass(myclass &x)
    {
        a = x.a;
        cout << "copy constructor:" << a << endl;
    }
};
int main()
{
    myclass m1(10), m2(9), m3(m2);
    cout << "destructor will start after main function" << endl;
}