#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char s1[] = "Hello world!";
    char s2[] = "Hello_world!";
    if(strcmp(s1, s2))
        cout << "not equal!" << endl;
    else
        cout << "equal!" << endl;
    return 0;
}
