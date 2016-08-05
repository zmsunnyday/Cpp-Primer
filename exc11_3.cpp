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

int main(int argc, char* argv[])
{
    string s;
    ifstream iFile(argv[1]);
    map<string, int> wordNum;
    while(iFile >> s)
    {
        auto ret = wordNum.insert({s, 1});
        if(!ret.second)
        {
            ++ret.first -> second;
        }
    }
    for(auto &c : wordNum)
    {
        cout << c.first << ":" << c.second << endl;
    }
    return 0;
}
