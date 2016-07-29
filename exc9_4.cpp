#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

bool myFind(vector<int>::iterator &beginI, vector<int>::iterator &endI, int a);

int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5, 6};
    int iFind;
    cin >> iFind;
    vector<int>::iterator ibeg = ivec.begin();
    vector<int>::iterator iend = ivec.end();
    bool result = myFind(ibeg, iend, iFind);
    if(result)
    {
        cout << "Find!" << endl;
    }
    else
    {
        cout << "No such number!" << endl;
    }
    return 0;
}

bool myFind(vector<int>::iterator &beginI, vector<int>::iterator &endI, int a)
{
    while(beginI != endI)
    {
        if(*beginI == a)
        {
            return true;
        }
        else
        {
            ++beginI;
        }
    }
    return false;
}
