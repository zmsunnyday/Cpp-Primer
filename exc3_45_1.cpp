#include <iostream>

using std::cout;

int main()
{
    int ia[3][4] = {{1,2,3,4},
                    {1,2,3,4},
                    {1,2,3,4}};

    for(auto *p = ia ; p -3 != ia; p++)
        for(auto *q = *p; q -4 != *p; q++)
            cout << *q << ' ';
    return 0;
}
