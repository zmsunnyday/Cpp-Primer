#include <string>
#include <vector>
#include <fstream>
#include <iostream>

using std::vector;
using std::string;
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    ifstream inFile(argv[1]);
    string s;
    vector<string> svec;
    while(inFile >> s)
    {
        svec.push_back(s);
    }
    for(auto &a : svec)
        cout << a << endl;
    inFile.close();
    return 0;
}

