#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::stable_sort;
using std::sort;
using std::unique;

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() <= s2.size();
}

void mySort(vector<string> &svec)
{
    sort(svec.begin(), svec.end());
    auto endUnique = unique(svec.begin(), svec.end());
    svec.erase(endUnique, svec.end());
    stable_sort(svec.begin(), svec.end(), isShorter);
}

int main()
{
    vector<string> svec;
    string s;
    while(cin >> s)
    {
        svec.push_back(s);
    }
    mySort(svec);
    for(auto& c : svec)
        cout << c <<" ";
    return 0;
}
