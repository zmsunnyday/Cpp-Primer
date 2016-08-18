#include <algorithm>
#include <list>
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::count;
using std::list;
using std::string;

int main()
{
    list<string> sList;
    string i;
    string a = "haha";
    while(cin >> i)
    {
        sList.push_back(i);
    }
    cout << "number of " << a << " is" << ":" << count(sList.cbegin(), sList.cend(), a) << std::endl;
    return 0;
}

