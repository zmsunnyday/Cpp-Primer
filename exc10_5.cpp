#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main()
{
    vector<char*> svec1 = {"nihao", "zhongguo", "hello", "world"};
    vector<char*> svec2 = {"nihao", "zhongguo", "hello", "world"};
    cout << equal(svec1.cbegin(), svec1.cend(), svec2.cbegin());
}
