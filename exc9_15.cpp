#include <vector>
#include <iostream>

using std::vector;

int main()
{
    vector<int> a = {1,2,3,4,5}, b = {1,2,3,4,5,6};
    if(a == b)
        std::cout << "Equal!";
    else
        std::cout << "Not equal!";
    return 0;
}
