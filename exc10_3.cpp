#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5};
    int i = 0;
    cout << accumulate(ivec.cbegin(), ivec.cend(), i);
    return 0;

}
