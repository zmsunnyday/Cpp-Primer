#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> svec;
    string s;
    while(cin >> s)
    {
        svec.push_back(s);
    }

    cout << count(svec.cbegin(), svec.cend(), "hello") << endl;
    return 0;
}
