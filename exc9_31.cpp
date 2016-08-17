#include <list>
#include <iostream>
#include <forward_list>

using std::cout;
using std::endl;
using std::list;
using std::forward_list;

int main()
{
    list<int> li = {1,2,3,4,5,6,7,8,9};
    forward_list<int> fli = {1,2,3,4,5,6,7,8,9};
    auto iter = li.begin();
    auto pre = fli.before_begin();
    auto curr = fli.begin();
    while(iter != li.end())
    {
        if(*iter % 2)
        {
            iter = li.insert(iter, *iter);
            ++iter;
            ++iter;
        }
        else
        {
            iter = li.erase(iter);
        }
    }
    for(auto c : li)
        cout << c << " ";
    cout << endl;
    while(curr != fli.end())
    {
        if(*curr % 2)
        {
            curr = fli.insert_after(curr, *curr);
            pre = curr++;
        }
        else
        {
            curr = fli.erase_after(pre);
        }
    }
    for(auto c : li)
        cout << c << " ";
    cout << endl;
    return 0;
}
