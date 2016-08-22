#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::partition;

bool longer5(const string& s)
{
    return s.size() >=5;
}

int main()
{
    vector<string> words = {"nihao", "haha", "what?", "thanks", "hola"};
    auto iterEnd = partition(words.begin(), words.end(), longer5);
    for(auto iter = words.cbegin(); iter != iterEnd; iter++)
    {
        cout << *iter << endl;
    }
    return 0;
}
