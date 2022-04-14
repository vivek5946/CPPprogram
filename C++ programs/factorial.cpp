#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return (n * factorial(n - 1));
}*/
int factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    int result = factorial(n);
    cout << n << "!=" << result;
}
