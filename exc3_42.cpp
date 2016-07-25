#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    vector<int> ivec(10, 1);
    int a[10];
    int i = 0;
    for(auto ele : ivec)
        a[i++] = ele;
    for(int j : a)
        cout << j << " ";

    return 0;

}
