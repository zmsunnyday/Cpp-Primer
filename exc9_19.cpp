#include <string>
#include <list>
#include <iostream>

using std::string;
using std::list;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s;
    list<string> sDeque;
    while(cin >> s)
    {
        sDeque.push_back(s);
    }
    auto it2 = sDeque.cend();
    for(auto it1 = sDeque.cbegin(); it1 != it2; it1++)
    {
        cout << *it1 << endl;
    }
    return 0;
}
