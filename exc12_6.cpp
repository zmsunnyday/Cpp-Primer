#include <iostream>
#include <vector>
#include <new>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void read(vector<int> *a);
void print(vector<int> *b);

int main()
{
    vector<int> *p = new vector<int>;
    read(p);
    print(p);

    delete p;
    p = nullptr;
    return 0;
}
void read(vector<int> *a)
{
    int var;
    while(cin >> var)
    {
        (*a).push_back(var);
    }
}
void print(vector<int> *b)
{
    for(auto c : *b)
    {
        cout << c << ' ';
    }
}
