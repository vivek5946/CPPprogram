// string cocatenation by operator overloading adn finding substr
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int s;
    string fn = "vivek";
    string ln = "gaikwad";
    string name = fn + ln;
    cout << name << endl;
    name = fn + " " + ln;
    cout << name << endl;
    cout << name.substr(3, 4) << endl;
    // vector<int>::iterator s;
    // s = find(name, "gaikwad");
    cout << name.find("gaikwad") << endl;
}