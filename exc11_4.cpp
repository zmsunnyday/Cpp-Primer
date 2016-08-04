#include <map>
#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
using std::ifstream;

string toString(const string &s)
{
    string result;
    for(auto c : s)
    {
        if(isalpha(c))
        {
            result.push_back(tolower(c));
        }
    }
    return result;
}

int main(int argc, char* argv[])
{
    string s;
    ifstream iFile(argv[1]);
    string a;
    map<string, int> wordNum;
    while(iFile >> s)
    {
        a = toString(s);
        ++wordNum[a];
    }
    for(auto &c : wordNum)
    {
        cout << c.first << ":" << c.second << endl;
    }
    return 0;
}
