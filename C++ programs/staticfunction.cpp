#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class box
{
public:
    static int l, b;

    static void area()
    {
        cout << "Area is :" << l * b << endl;
    }
};
int box::l = 0;
int box::b = 0;
int main()
{
    // calling static function without using object
    box::area();
    // calling function using object;
    box b1, b2, b3;
    b1.l = 5;
    b1.b = 6;
    b2.l = 4;
    b1.area();
    b2.area();
    b3.area();
    return 0;
}