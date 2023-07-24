#include <iostream>
using namespace std;

int main()
{
    long n, dots = 0;
    cin >> n;
    if (n > 1)
    {
        dots += n * 5;
        for (long i = 1; i < n; ++i)
        {
            dots += 2 + (n - i - 1) * 3;
        }
    }
    else
        dots += 5;
    cout << dots % 45678;
}