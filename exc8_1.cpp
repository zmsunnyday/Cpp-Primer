#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::istream;
using std::endl;

istream &read(istream &is);

int main()
{
    istream& isResult = read(cin);
    if(isResult.eof())
        cout << "eof" << endl;
    else if(isResult.fail())
        cout << "fail" << endl;
    else if(isResult.bad())
        cout << "bad" << endl;
    else if(isResult.good())
        cout << "good" << endl;
    return 0;
}

istream &read(istream &is)
{
    string s;
    char c;
    while(is >> c)
        s = s + c;
    cout << s << endl;
    if(is.eof())
        cout << "eof" << endl;
    is.clear();
    return is;
}
