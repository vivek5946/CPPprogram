#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class A
{
    int data;           // private data
    string a = "vivek"; // private data
public:
    A()
    {
        data = 10;
    }
    friend class B;        // friend class
    friend void fun(A a1); // friend function;
};
class B
{
    int num = 1;
    string b = "gaikwad";

public:
    void print(A a1)
    {
        cout << "by friend class" << endl;
        cout << a1.data << endl;
        cout << a1.a + " " + b << endl;
        cout << "by function" << endl;
    }

    /*void fun(A a1)
    {
        cout << a1.data << endl;
        cout << a1.a + " " + b << endl;
    }*/
};
void fun(A a1)
{
    cout << a1.data << endl;
    cout << a1.a + " " + "gaikwad" << endl;
}
int main()
{
    A a1;
    B b1;
    b1.print(a1);
    fun(a1);

    return 0;
}