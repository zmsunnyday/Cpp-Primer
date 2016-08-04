#include <iostream>
#include <string>
#include <memory>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char *a = new char[strlen("hello") + strlen("nihao") + 1];
    strcat(a, "hello");
    strcat(a, "nihao");
    cout << a << endl;
    delete []a;

    string *b = new string;
    *b = *b + "hello" + "nihao";
    cout << *b << endl;
    delete b;
    return 0;
}
