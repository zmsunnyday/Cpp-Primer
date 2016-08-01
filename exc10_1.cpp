#include <algorithm>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec;
    int ivar;
    while(cin >> ivar)
    {
        ivec.push_back(ivar);
    }
    cout << "The number of '2' is:" << count(ivec.cbegin(), ivec.cend(), 2) << endl;
    return 0;
}
