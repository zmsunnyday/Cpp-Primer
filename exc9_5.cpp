#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

vector<int>::iterator myFind(vector<int>::iterator &beginI, vector<int>::iterator &endI, int a);

int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5, 6};
    int iFind;
    cin >> iFind;
    vector<int>::iterator ibeg = ivec.begin();
    vector<int>::iterator iend = ivec.end();
    auto result = myFind(ibeg, iend, iFind);
    if(result != iend)
    {
        cout << "Find!" << endl;
    }
    else
    {
        cout << "No such number!" << endl;
    }
    return 0;
}

vector<int>::iterator myFind(vector<int>::iterator &beginI, vector<int>::iterator &endI, int a)
{
    while(beginI != endI)
    {
        if(*beginI == a)
        {
            return beginI;
        }
        else
        {
            ++beginI;
        }
    }
    return beginI;
}
