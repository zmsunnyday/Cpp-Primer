#include <iostream>
#include <stdexcept>

using std::cout;
using std::cin;
using std::runtime_error;
using std:: endl;

int main()
{
    int a, b;
    while(cin >> a >>b)
    {
        try
        {
            if(!b)
                throw runtime_error("the second number should not be 0!");
            cout << a / b;
        }
        catch(runtime_error err)
        {
            cout << err.what() << "\nTry again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (c == 'n')
                break;
        }
    }
    return 0;
}
