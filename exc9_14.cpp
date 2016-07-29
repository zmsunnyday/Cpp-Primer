#include <list>
#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::list;
using std::vector;
using std::string;

int main()
{
    list<const char *> myList = {"Hello", "World", "!"};
    vector<string> myVector = {"nihao", "shijie", "!"};
    myVector.assign(myList.cbegin(), myList.cend());
    for(auto &a : myVector)
    {
    cout << a << " ";
    }
    cout << endl;
    return 0;
}
