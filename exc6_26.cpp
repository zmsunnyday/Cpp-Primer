#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

int main(int argc, char *argv[])
{
    for(int i = 1; i < argc; i++)
        cout << argv[i] <<endl;
    return 0;
}
