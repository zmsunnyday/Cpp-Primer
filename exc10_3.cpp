#include <numeric>
#include <iostream>
#include <vector>

using std::accumulate;
using std::cout;
using std::vector;

int main()
{
    vector<int> ivec = {1,2,3,4,5,6,7,8,9};
    cout << accumulate(ivec.cbegin(), ivec.cend(), 0) << std::endl;
    return 0;
}
