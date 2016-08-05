#include <map>
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::multimap;
using std::string;
using std::endl;

int main()
{
    multimap<string, string> bookList = {{"smith", "into the fire"}, {"white", "zip"},{"white", "changing"}, {"jack", "haha"},
                                            {"nick", "what"}, {"white", "heihei"}};
    string author;
    int num;
    while(cin >> author)
    {
        auto it = bookList.find(author);
        num = bookList.count(author);
        if(num)
        {
            cout << (*it).first << ": ";
            while(num)
            {
                cout << (*it).second << " ";
                ++it;
                --num;
            }
            cout << endl;
        }
        else
            cout << "author not found" << endl;
    }
    return 0;
}
