#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::vector;
using std::endl;
using std::fill_n;

int main()
{
    vector<int> ivec = {1,2,3,4,5,6,7,8,9};
    fill_n(ivec.begin(), ivec.size(), 0);
    for(auto c : ivec)
        cout << c << " ";
    cout << endl;
    return 0;
}
