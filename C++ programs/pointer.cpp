#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void fun(int n)
{
    cout << "number is:" << n << endl;
}
int main()
{
    void (*ptr)(int);
    ptr = &fun;
    ptr(5);
    // or
    (*ptr)(5); // dereferancing
    return 0;
}