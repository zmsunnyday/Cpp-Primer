#ifndef TEXTQUERY_H
#define TEXTQUERY_H
#include <vector>
#include <set>
#include <map>
#include <string>
#include <iostream>

using std::ifstream;
using std::shared_ptr;
using std::vector;
using std::string;
using std::set;
using std::map;

class TextQuery{
public:

private:
    shared_ptr<vector<string>> contentPtr;
    map<string, set<int>> wordInLine;
};



#endif // TEXTQUERY_H
