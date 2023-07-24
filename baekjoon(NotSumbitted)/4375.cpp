#include <iostream>
using namespace std;

int main()
{
    long long n, t, c;
    while (cin >> n)
    {
        t = c = 1;
        while (1)
        {
            if (t % n != 0)
            {
                t = t * 10 + 1;
                t %= n;
                ++c;
            }
            else
            {
                cout << c << '\n';
                break;
            }
        }
    }
}