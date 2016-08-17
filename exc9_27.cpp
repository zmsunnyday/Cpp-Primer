#include <forward_list>
#include <iostream>

using std::forward_list;
using std::endl;
using std::cout;

int main()
{
    forward_list<int> fl = {1,2,3,4,5,6,7,8,9,0};
    auto pre = fl.before_begin();
    auto curr = fl.begin();
    while(curr != fl.end())
    {
        if(*curr % 2)
        {
            curr = fl.erase_after(pre);
        }
        else
        {
            pre = curr;
            ++curr;
        }
    }
    for(auto c : fl)
        cout << c << " ";
    return 0;
}
