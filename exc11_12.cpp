#include <iostream>
#include <string>
#include <vector>
#include <utility>

using std::vector;
using std::string;
using std::pair;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<pair<string, int>> pvec;
    int i;
    string s;
    while(cin >> s >> i)
    {
 //       pvec.push_back({s, i});
        pvec.push_back(make_pair(s, i));
    }
    for(auto c : pvec)
        cout << c.first << c.second << endl;
    return 0;
}
