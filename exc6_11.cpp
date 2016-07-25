#include <iostream>

using std::cout;
using std::cin;

void reset(int &);

int main()
{
    int a;
    cin >> a;
    reset(a);
    cout << a;
    return 0;
}

void reset(int &a)
{
    a = 0;
}
