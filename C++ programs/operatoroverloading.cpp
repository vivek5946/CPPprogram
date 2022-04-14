#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class add
{
    int a, b;

public:
    add(int x, int y)
    {
        a = x;
        b = y;
    }
    add operator+(add obj)
    {
        add temp(0, 0);
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
    void print()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    add obj1(5, 6), obj2(8, 9);
    add obj3 = obj1 + obj2;
    obj3.print();
}