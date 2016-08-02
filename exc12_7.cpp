#include <vector>
#include <memory>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::shared_ptr;

void read(shared_ptr<vector<int>> b);
void print(shared_ptr<vector<int>> c);

int main()
{
    shared_ptr<vector<int>> a = std::make_shared<vector<int>>();
    read(a);
    print(a);
    return 0;
}

void read(shared_ptr<vector<int>> b)
{
    int var;
    while(cin >> var)
    {
        (*b).push_back(var);
    }
}

void print(shared_ptr<vector<int>> c)
{
    for(auto i : *c)
        cout << i << ' ';
}
