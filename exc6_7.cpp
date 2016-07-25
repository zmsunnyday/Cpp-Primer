#include <iostream>

using std::cout;
using std::endl;

int f()
{
    static int a = 0;
    a++;
}

int main()
{
    int i = 10;
    while(--i)
        cout << f() << endl;
    return 0;
}
