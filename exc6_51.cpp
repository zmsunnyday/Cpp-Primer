#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void f()
{
    cout << "f()" << endl;
}

void f(int i)
{
    cout << "f(int)" << endl;
}

void f(int a, int b)
{
    cout << "f(int, int)" << endl;
}

void f(double a, double b = 3.14)
{
    cout << "f(double, double)" << endl;
}

int main(int argc, char *argv[])
{
    f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}
