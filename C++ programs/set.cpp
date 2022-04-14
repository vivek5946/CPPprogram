#include <iostream>
#include <bits/stdc++.h>
#define pi pair<int, int> // pair of integers
using namespace std;
class comp
{
public:
    bool operator()(const pi &a, const pi &b)
    {
        return a.second < b.second; // we are comparing second element
    }
};
int main()
{
    set<int> s1;
    s1.insert(4);
    s1.insert(3);
    s1.insert(5);
    for (auto i : s1)
        cout << i << " "; // 3 4 5 will be default order(acending order)
    cout << endl;
    s1.insert(3); // in set will take unique element
    for (auto i : s1)
        cout << i << " "; // 3 4 5 will be default order(acending order)
    cout << endl;
    s1.erase(5);
    for (auto i : s1)
        cout << i << " ";
    cout << endl;
    auto it = s1.find(4);
    cout << *it;
    cout << endl;
    s1.erase(s1.begin(), it); // last element will not erase
    for (auto i : s1)
        cout << i << " ";
    cout << endl;
    // pairwise comparison
    set<pi, comp> s2; // comp is comparator function
    s2.insert({2, 3});
    s2.insert({0, 3});
    s2.insert({0, 0});
    s2.insert({5, 1});
    for (auto i : s2)
        cout << i.first << " " << i.second << endl;
    cout << endl;

    //--------------------------------unorderd set--------------------------------
    unordered_set<int> u1;               // in set duplicates are not allowed
    unordered_multiset<int> u2;          // in multiset duplicates are allowed
    u1.insert({1, 2, 4, 4, 6, 6, 8, 8}); // hence size are decresed
    u2.insert({1, 2, 4, 4, 6, 6, 8, 8});
    cout << u1.size() << endl;
    cout << u2.size() << endl;
    for (auto a : u1)
        cout << a << " "; // here we dont no orderd of unorderd set
    cout << endl;
    // union
    unordered_set<int> u3;
    u3 = u1;
    u3.insert(u2.begin(), u2.end());
    cout << u3.size() << endl;

    return 0;
}