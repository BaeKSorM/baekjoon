#include <iostream>
using namespace std;

int main()
{
    long n, p = 2;
    cin >> n;
    if (n == 1)
        cout << 1;
    else if (n < 8)
        cout << 2;
    else
    {
        for (long i = 1;; ++i)
        {
            if (n >= p && n < p + 6 * i)
            {
                cout << i + 1;
                break;
            }
            p += 6 * i;
        }
    }
}