#include <string>

using std::string;

string (&func(string (&arg)[10]))[10];

int main(int agrc, char *argv[])
{
    string s[10];
    string (&a)[10] = func(s);
    return 0;
}

string (&func(string (&arg)[10]))[10]
{
    return arg;
}
