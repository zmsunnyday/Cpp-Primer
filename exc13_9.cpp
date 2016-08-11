#include "exc13_5.h"

int main()
{
    {
    HasPtr a = string("hello world");
    HasPtr b = string("nihao");
    b = a;
    b.print();
    }
    return 0;
}

