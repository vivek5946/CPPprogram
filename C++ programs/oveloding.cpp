#include <iostream>
using namespace std;
// int foo()
//{
//     return 10;
// }

char foo()
{
    return 'a';
}

int main()
{
    char x = foo();
    // getchar();
    cout << x << endl;
    return 0;
}
