#include <vector>
#include <list>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
    list<int> ilist = {1, 2, 3, 4, 5};
    auto lBegin = ilist.cbegin();
    auto lEnd = ilist.cend();
    vector<double> dvec(lBegin, lEnd);
    for(auto d : dvec)
    {
        cout << d << ' ';
    }
    cout << endl;
    vector<int> ivec = {6,7,8,9};
    auto vBegin = ivec.cbegin();
    auto vEnd  = ivec.cend();
    vector<double> dvec2(vBegin, vEnd);
    for(auto d : dvec2)
    {
        cout << d << ' ';
    }
    cout << endl;
    return 0;
}
