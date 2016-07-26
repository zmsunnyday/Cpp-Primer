#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int myAdd(int a, int b)
{
    return a + b;
}
int mySub(int a, int b)
{
    return a - b;
}
int myMul(int a, int b)
{
    return a * b;
}
int myDiv(int a, int b)
{
    return a / b;
}

typedef int (*fp)(int, int);

int main()
{
    vector<fp> a = {myAdd, mySub, myMul, myDiv};
    for(auto fun : a)
        cout << fun(4, 2) << endl;
    return 0;
}
