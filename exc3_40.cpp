#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char s1[] = "hello ";
    char s2[] = "world!";
    char s3[20];
    strcat(s3, s1);
    strcat(s3, s2);
    cout << s3 << endl;
    return 0;
}
