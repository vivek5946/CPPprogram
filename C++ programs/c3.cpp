#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    a.push_back(2);

    vector<int> b(a);
    // this is kind of parameterised constructor
    // but this is called as copy constructor here a vector copying into b vector
    b[0] = 6;
    cout << b.at(0) << endl;
    vector<char> c(5, 66);
    for (auto m = c.begin(); m != c.end(); m++)
    {
        cout << (*m) << endl;
    }
    // here n:5 are denoting size of vector
    // here vector of 5 element will be created and each slot will be initialized by 66 number
    // char b denote ascii code of 66
    // hence 5 b's will be in vector
    vector<int> d(a.begin(), a.end());

    // here d is copy constructor
    //  herre everything between a.begin and a,end we are copying into d vector
    // if a={2} then d={2}
    d.push_back(5);    // now d={2,5}
    vector<int> v(10); // here vector has size 10
    for (int i = 0; i < 10; i++)
        v[i] = i + 1;          // v{1,2,3,-----10}
    cout << v.at(6) << endl;   // here we are printing value of vector v at 6 th position
    cout << v.back() << endl;  // it will print last value of vector
    cout << v.front() << endl; // it will print first value of vector
    //**v.clear();
    //**cout << "size=" << v.size() << endl;
    //**cout << "capacity=" << v.capacity() << endl;// capacity>= size and capacity will increase dynamically
    //**cout << v[0]<<endl;
    // you can increaseand dicrease capacity by reserve() function
    // if you want to increase or dicrease size then you use resize function
    // if size of vector is zero then it is empty dont consider capacity
    cout << v.empty() << endl;

    //  ITERATORS*****---------------------------------------------------------------------------------------------------
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // for vector iterators arre random acces it can go forword and back word
    // for list they are bidirectional
    // in copetitive progrmming we will write auto keyword then it will take forword or reverse iterator accordingly
    //** vector<int>::iterator it;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << endl;
    }
    cout << v.max_size() << endl;

    return 0;
}