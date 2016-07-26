#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main(int argc, char *argv[])
{
    string word, ending;
    cin >> word >> ending;
    if(ending == "")
        cout << make_plural(2, word) << endl;
    else
        cout << make_plural(2, word, ending) << endl;
    return 0;
}
