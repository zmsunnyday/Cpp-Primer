#include <iostream>

using std::cout;
typedef int int_array4[4];

int main()
{
    int ia[3][4] = {{1,2,3,4},
                    {1,2,3,4},
                    {1,2,3,4}};
    for(int_array4 *p = ia; p - 3 != ia; p++)
        for(auto q = *p; q -4 != *p; q++)
            cout << *q << ' ';
    return 0;
}
