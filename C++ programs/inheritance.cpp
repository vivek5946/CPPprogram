#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class A
{
public:
    A(int x)
    {
        cout << "A:" << x << endl;
    }
    void get()
    {
        cout << "just play and run" << endl;
    }
};
class B : public A
{
public:
    B(int x, int y) : A(y)
    {
        cout << "B:" << x << endl;
    }
};
class C : public B
{
public:
    C(int x, int y, int z) : B(y, z)
    {
        cout << "C:" << x << endl;
    }
};
int main()
{
    C obj(2, 5, 9);
    return 0;
}