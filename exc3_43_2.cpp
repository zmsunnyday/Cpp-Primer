#include <iostream>

using std::cout;

int main()
{
    int ai[3][4] = {{1,2,3,4},
                    {1,2,3,4},
                    {1,2,3,4}};

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 4; j++)
            cout << ai[i][j] << " ";
    return 0;
}
