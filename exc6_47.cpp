#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

#define NDEBUG

void printVector(vector<int> &vec)
{
    #ifdef NDEBUG
        cout << "vector size:" << vec.size() << endl;
    #endif // NDEBUG

    if(vec.size() != 0)
    {
        auto iv = vec.back();
        vec.pop_back();
        cout << iv << endl;
    }
    if(vec.size() != 0)
        printVector(vec);
}

int main(int argc, char *argv[])
{
    vector<int> ivec = {1,2,3,4,5,6,7,8,9,10};
    printVector(ivec);
    return 0;
}
