#include <algorithm>
#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::count;
using std::vector;

int main()
{
    vector<int> ivec;
    int i;
    int a = 5;
    while(cin >> i)
    {
        ivec.push_back(i);
    }
    cout << "number of " << a << " is" << ":" << count(ivec.cbegin(), ivec.cend(), a) << std::endl;
    return 0;
}
