#include <iostream>
#include <string>
#include "Family.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

using std::getline;


int main()
{
    Family f1;
    f1.insert("Zhang Meng Jingyi");
    Family f2(cin);
    f1.print(cout);
    f2.print(cout);
    return 0;
}
