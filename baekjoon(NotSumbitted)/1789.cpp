#include <iostream>
using namespace std;

int main()
{
    long n, l = 1;
    cin >> n;
    while (1)
    {
        n -= l;
        if (n == 0)
        {
            cout << l;
            break;
        }
        else if (n < 0)
        {
            cout << l - 1;
            break;
        }
        ++l;
    }
}