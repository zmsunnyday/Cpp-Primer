#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

using std::cout;
using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;
using std::getline;
using std::endl;

int main(int argc, char* argv[])
{
    ifstream iFile(argv[1]);
    vector<string> svec;
    string s;
    while(getline(iFile, s))
        svec.push_back(s);
    for(auto &c : svec)
    {
        istringstream line(c);
        string word;
        while(line >> word)
            cout << word << endl;
    }
    return 0;
}

