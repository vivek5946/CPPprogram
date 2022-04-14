#include <bits/stdc++.h>
using namespace std;
class comp
{
public:
    bool operator()(char a, char b)
    {
        return a > b;
    }
};
void display(map<char, int> v)
{
    cout << "printing element of the map----" << endl;
    for (auto x : v)
    {
        cout << x.first << "\t : \t" << x.second << endl;
    }
    cout << "printed " << v.size() << "element succesfully" << endl;
}
void display(map<char, int, comp> v)
{
    cout << "printing element of the map----" << endl;
    for (auto x : v)
    {
        cout << x.first << "\t : \t" << x.second << endl;
    }
    cout << "printed " << v.size() << "element succesfully" << endl;
}
void display(multimap<char, int> v)
{
    cout << "printing element of the multimap----" << endl;
    for (auto x : v)
    {
        cout << x.first << "\t : \t" << x.second << endl;
    }
    cout << "printed " << v.size() << "element succesfully" << endl;
}
void display(unordered_map<char, int> &v)
{
    cout << "printing the contest of unordered map :" << endl;
    for (auto p : v)
    {
        cout << p.first << "\t: \t" << p.second << endl;
    }
    cout << "printed" << v.size() << "elements suceesfully---" << endl;
}

int main()
{
    map<char, int> m;
    m['a'] = 2;
    m['a'] = 3;
    cout << m.size() << endl;
    m['b'] = 1;
    m['t'] = 3;
    m['s'] = 3;
    m['d'] = 6;
    m.insert(make_pair('e', 2)); // we can insert pairs you can use this or
    // you can use following
    m.insert({'c', 5});
    cout << m.size() << endl;
    display(m);
    m.insert({'a', 0}); // not updation since key aready exist then it will ignored
    display(m);
    m.erase('a');
    m.insert({'a', 0});
    display(m);
    cout << m['d'] << endl;     // if key not found then it will display grbeg value
    if (m.find('b') == m.end()) // find function returns iterator
        cout << "key not found" << endl;
    else
        cout << "key is found : value=" << m['b'] << endl;

    // modified map
    map<char, int, comp> v; // we want to arrange in decending order
    v.insert(m.begin(), m.end());
    display(v);

    // multimap
    multimap<char, int> n;
    n.insert(v.begin(), v.end());
    display(n);
    n.erase('a');
    display(n);
    //-------------------------------unodered map---------------
    unordered_map<char, int> u;
    u['a'] = 2;
    u['a'] = 3;
    cout << u.size() << endl;
    u['b'] = 1;
    u['t'] = 3;
    u['s'] = 3;
    u['d'] = 6;
    u.insert({'e', 9});
    display(u);
    // above all function can be applied on unordered map and unordered multimap
}