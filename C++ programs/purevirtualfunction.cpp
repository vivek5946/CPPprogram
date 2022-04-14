#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    virtual void fun() = 0; // pure virtual function in this nothing will present in this
    // function but function body should be present at another classes
    // when pure virtual function present then that class called as abstract class
};
class B : public A
{
    int a;

public:
    void fun()
    {
        cout << "B class" << endl;
    }
};
class C : public A
{
    int a;

public:
    void fun()
    {
        cout << "C classs" << endl;
    }
};
/*void print(A *b)
{
    cout << "value" << b->fun() << endl;
}*/
int main()
{
    B b1;
    b1.fun();
    C c1;
    c1.fun();

    // A*a1;new A(1);  //in pure virtual function you cannot write like this;
    // A *a2 = new b1(9);
    // A *a3 = new c1(10);
    // print(a2);
    // print(a3);
    return 0;
}