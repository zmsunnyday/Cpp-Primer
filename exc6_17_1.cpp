#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::string;

int findUpper(const string &s);
void toLower(string &s);

int main()
{
    string s;
    cin >> s;
    findUpper(s);
    toLower(s);
    return 0;
}

int findUpper(const string &s)
{
    for(auto &c : s)
    {
        if(isupper(c))
        {
            cout << "Has Upper!"<< '\n';
            return 1;
        }
    }
    cout << "No!" << '\n';
    return 0;
}

void toLower(string &s)
{
    for(auto &c : s)
    {
        if(isupper(c))
            c +='a' - 'A';
    }
    cout << s;
}
