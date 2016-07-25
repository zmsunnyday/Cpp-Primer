#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> ivec(begin(a), end(a));
    for(auto i : ivec)
        cout << i << " ";
    return 0;
}
