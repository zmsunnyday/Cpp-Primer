#include "exc12_22.h"
//#include "StrBlobPtr.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s;
    const StrBlob a({"nihao", "hello", "hola"});
    ConstStrBlobPtr sbpBegin = a.begin();
    for(unsigned int c = 0; c != a.size();sbpBegin.incr())
    {
        cout << sbpBegin.deref() << endl;
        ++c;
    }
    return 0;
}
