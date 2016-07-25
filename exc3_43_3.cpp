#include <iostream>

using std::cout;
using int_array4 = int[4];

int main()
{
    int ai[3][4] = {{1,2,3,4},
                    {1,2,3,4},
                    {1,2,3,4}};
    for(int (*p)[4] = ai; p - 3 != ai; p++)
        for(int *q = *p; q - 4 != *p; q++)
            cout << *q << " ";
    return 0;
}
