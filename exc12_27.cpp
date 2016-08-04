#include "TextQuery.h"
#include "QueryResult.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;

void runQuery(ifstream &file);

int main()
{
    runQuery(file);
    return 0;
}

void runQuery(ifstream &file)
{
    TestQuery tq(file);
    while(true)
    {
        cout << "please input the word you want to search(q for exit): ";
        string word;
        if(!(cin >> word) || word == 'q')
            break;
        else
            print(cout, tq.query(word)) << endl;
    }
}
