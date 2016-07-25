#include <iostream>
#include "exc6_8.h"
using std::cout;
using std::endl;

int main()
{
    int i = 10;
    while(i--)
        cout << f() << endl;
    return 0;
}

int f()
{
    static int a = 0;
    return a++;
}
