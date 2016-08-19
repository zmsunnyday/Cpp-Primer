#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::sort;
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::unique;

void mySort(vector<string> &svec);

int main()
{
    vector<string> svec;
    string s;
    while(cin >> s)
        svec.push_back(s);
    mySort(svec);
    for(auto &c : svec)
        cout << c << " ";
    cout << endl;
    return 0;
}

void mySort(vector<string> &svec)
{
    sort(svec.begin(), svec.end());
    auto endIter = unique(svec.begin(), svec.end());
    svec.erase(endIter, svec.end());
}
