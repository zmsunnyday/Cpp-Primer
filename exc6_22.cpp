#include <iostream>

using std::cin;
using std::cout;

void pSwap(int **pa, int **pb);

int main()
{
    int a, b;
    cin >> a >> b;
    int *pa = &a, *pb = &b;
    pSwap(&pa, &pb);
    cout << *pa << '\n' << *pb;
    return 0;
}

void pSwap(int **pa, int **pb)
{
    int *tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
