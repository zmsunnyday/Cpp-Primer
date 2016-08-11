#include <string>
#include <iostream>
#include "exc13_5.h"

using std::cout;
using std::endl;
using std::string;


int main()
{
    HasPtr hp1("hello world");
    HasPtr hp2 = hp1;
    hp2.print();
    return 0;
}
