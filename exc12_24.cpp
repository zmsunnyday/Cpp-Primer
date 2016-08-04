#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned int length;
    cout << "how long do you want to input:";
    cin >> length;
    char *s = new char[length + 1];
    cin.ignore();
    cout << "please input your string:";
    cin.get(s, length + 1);
    cout << s << endl;
    delete []s;
    return 0;
}
