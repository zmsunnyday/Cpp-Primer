#include <iostream>

using std::cout;

int main()
{
    int ia[3][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}};

    for(int (&i)[4] : ia)
        for(int &j : i)
        {
            cout << j << " ";
        }
    return 0;
}
