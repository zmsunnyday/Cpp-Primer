#include <iostream>

using std::cout;
using int_array4 = int[4];

int main()
{
    int ia[3][4] = {{1,2,3,4},
                    {1,2,3,4},
                    {1,2,3,4}};
    for(int_array4 &i : ia)
        for(int j : i)
            cout << j << ' ';
    return 0;
}
