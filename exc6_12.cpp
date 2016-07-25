#include <iostream>

using std::cin;
using std::cout;

void mySwap(int &a, int &b);

int main()
{
    int a, b;
    cin >> a >> b;
    mySwap(a, b);
    cout << a << '\n' << b;
    return 0;
}

void mySwap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
