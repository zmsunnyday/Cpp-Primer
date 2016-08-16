#include <vector>
#include <list>

using std::vector;
using std::list;

int main()
{
    vector<int> i_vec1 = {1,2,3,4,5,6,7,8};
    list<double> d_list1(i_vec1.cbegin(), i_vec1.cend());
    vector<int> i_vec2(d_list1.cbegin(), d_list1.cend());
    return 0;

}
