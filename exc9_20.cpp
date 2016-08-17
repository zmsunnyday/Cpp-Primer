#include <iostream>
#include <list>
#include <deque>

using std::list;
using std::deque;
using std::cout;
using std::endl;

int main()
{
    list<int> iList = {1,2,3,4,5,6,7,8,9};
    deque<int> iDeque1, iDeque2;
    auto it1 = iList.cbegin();
    auto it2 = iList.cend();
    while(it1 != it2)
    {
        if(*it1 % 2 == 0)
        {
            iDeque1.push_back(*it1);
        }
        else
        {
            iDeque2.push_back(*it1);
        }
        it1++;
    }
    for(auto c : iDeque1)
    {
        cout << c << " ";
    }
    cout << endl;
    for(auto c : iDeque2)
    {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
