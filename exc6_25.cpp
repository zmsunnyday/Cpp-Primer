#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    if(argc < 3)
    {
        cout << "input arguments not enough, two needed!" << endl;
    }
    string s;
    for(int i = 1; i < argc; i++)
    {
        s += argv[i];
    }
    cout << s << endl;
    return 0;
}
