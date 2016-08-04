#include "Family.h"
using std::cout;

Family::Family(istream &is)
{
    string line, lastName, child;
    while(getline(is, line))
    {
        istringstream family(line);
        family >> lastName;
        while(family >> child)
            data[lastName].push_back(child);
    }
}

void Family::insert(const string & input)
{
    string lastName, child;
    istringstream family(input);
    family >> lastName;
    while(family >> child)
        data[lastName].push_back(child);
}


void Family::print(ostream &os) const
{
    for(auto family : data)
    {
        os << family.first << ": ";
        for(auto child : family.second)
        {
            os << child << " ";
        }
        cout << endl;
    }
}
