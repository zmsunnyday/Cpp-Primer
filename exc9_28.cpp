#include <iostream>
#include <string>
#include <forward_list>

using std::string;
using std::forward_list;
using std::cout;
using std::endl;

void findInsert(forward_list<string> &stringList, const string &s1, const string &s2);

int main()
{
    forward_list<string> fl = {"nihao", "hello", "hola"};
    string s = "what";
    string si = "what";
    findInsert(fl, s, si);
    for(auto &c : fl)
        cout << c << endl;
    return 0;
}

void findInsert(forward_list<string> &stringList, const string &s1, const string &s2)
{
    auto curr = stringList.begin();
    auto it = curr;
    while(curr != stringList.end())
    {
        if(*curr == s1)
        {
            curr = stringList.insert_after(curr, s2);
            break;
        }
        else
        {
            it = curr;
            ++curr;
        }
    }
    stringList.insert_after(it, s2);
}
