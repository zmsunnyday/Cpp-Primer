#include <fstream>
#include <vector>
#include <string>

using std::ifstream;
using std::ofstream;
using std::getline;
using std::string;
using std::vector;

int main(int argc, char *argv[])
{
    ifstream iFile(argv[1]);
    ofstream oFile(argv[2]);
    string s;
    vector<string> svec;
    while(iFile)
    {
        getline(iFile, s);
        svec.push_back(s);
    }
    for(auto &c : svec)
    {
        oFile << c << std::endl;
    }
    return 0;
}
