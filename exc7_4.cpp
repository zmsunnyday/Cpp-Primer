#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

struct Person
{
    string name;
    string addr;
    string getName() const;
    string getAddr() const;
};
