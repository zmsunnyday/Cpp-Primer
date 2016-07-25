#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s1;
    getline(cin, s1);
    string s2 = "Hello world!";
    if(s1 == s2)
        cout << "equal!";
    else
        cout << "not equal!";
    return 0;

}
