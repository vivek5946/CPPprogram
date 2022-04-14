#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int sum(int m, int n)
{
    return (m + n);
}
int sum(int m, int n, int a)
{
    return (m + n + a);
}
int sum(int a, float b)
{
    return (a + b);
}
int main()
{
    int m = 3, n = 5, a = 9;
    float b = 10;
    int x = sum(m, n);
    int y = sum(m, n, a);
    int z = sum(a, b);
    cout << x << endl
         << y << endl
         << z << endl;
}