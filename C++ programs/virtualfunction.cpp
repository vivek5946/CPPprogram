#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class A
{
public:
    virtual void show() // if we not right virtual here then even though we are ponting to derived class it will execute function of base class
                        // i.e called function overriding

    {
        cout << "base class" << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "derived class" << endl;
    }
};
int main()
{
    B b1;
    A *ptr;
    ptr = &b1;
    ptr->show();
}