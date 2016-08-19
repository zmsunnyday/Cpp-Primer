#include <iostream>
#include <vector>
#include <numeric>

using std::vector;
using std::accumulate;
using std::cout;
using std::endl;

int main()
{
    vector<double> dvec = {1.5, 2.0, 3.0, 4,5,6,7,8,9};
    cout << accumulate(dvec.cbegin(), dvec.cend(), 0.0) << endl;
    return 0;
}
