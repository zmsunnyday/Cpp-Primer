#include <iostream>

using std::cin;
using std::cout;

int intcmp(int *a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << intcmp(&a, b);
    return 0;
}

int intcmp(int *a, int b)
{
    return *a > b? *a : b;
}
