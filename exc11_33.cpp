#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

using std::string;
using std::map;
using std::cout;
using std::ifstream;
using std::istringstream;
using std::endl;
using std::getline;

map<string, string> &mapMakeup(ifstream &inFile, map<string, string> &tranMap);
string wordTrans(string &s, map<string, string> &tranMap);

int main()
{
    map<string, string> Map;
    string trans;
    ifstream rules("/home/Downloads/GCC_4_7_0/11/data/rules");
    ifstream text("/home/Downloads/GCC_4_7_0/11/data/text");
    Map = mapMakeup(rules, Map);
    while(getline(text, trans))
    {
        cout << trans << endl;
        cout << wordTrans(trans, Map) << endl;
    }
    return 0;
}

map<string, string> &mapMakeup(ifstream &inFile, map<string, string> &tranMap)
{
    string s1, s2;
    while(inFile >> s1 >> s2)
    {
        tranMap[s1] = s2;
    }
    return tranMap;
}

string wordTrans(string &s, map<string, string> &tranMap)
{
    string word, result;
    istringstream is(s);
    while(is >> word)
    {
        auto it = tranMap.find(word);
        if(tranMap.count(word))
            word = it -> second;
        result += word;
    }
    return result;
}
