#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::vector;
using std::list;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int ai[] = {0, 1, 1, 5, 8, 2, 3, 13, 21, 58};
    vector<int> ivec = {0, 1, 1, 5, 8, 2, 3, 13, 21, 58};
    list<int> ilist = {0, 1, 1, 5, 8, 2, 3, 13, 21, 58};
    auto itv1 = ivec.begin();
    auto itl1 = ilist.begin();
    while(itv1 != ivec.end())
    {
        if(!(*itv1 % 2))
        {
            ivec.erase(itv1);
        }
        else
            ++itv1;
    }
    while(itl1 != ilist.end())
    {
        if(*itl1 % 2)
        {
            ilist.erase(itl1);
        }
        else
            ++itl1;
    }
    for(auto c : ivec)
        cout << c << " ";
    cout << endl;
    for(auto c : ilist)
        cout << c << " ";
    cout << endl;
    return 0;
}
