#include "exc12_2.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    StrBlob a({"hello", "world", "nihao"});
    StrBlob b(a);
    cout << a.size() << b.size() << endl;
    a.pop_back();
    cout << a.size() << b.size() << endl;
    b.pop_back();
    cout << a.size() << b.size() << endl;
    cout << a.back() << endl;
    const StrBlob c;
    cout << c.back() << endl;
    return 0;
}

