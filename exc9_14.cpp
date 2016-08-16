#include <vector>
#include <list>
#include <string>

using std::vector;
using std::string;
using std::list;

int main()
{
    list<const char*> slist = {"sha", "nihao", "haha"};
    vector<string> svec;
    svec.assign(slist.cbegin(), slist.cend());
    return 0;
}
