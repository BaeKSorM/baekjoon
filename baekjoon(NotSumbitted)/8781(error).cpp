#include <iostream>
using namespace std;

int main()
{
    long long int x, k, max = 0;
    cin >> x >> k;
    if (k + k / 2 + k / 4 <= x && k + k / 2 + k / 4 > max)
    {
        max = k + k / 2 + k / 4;
    }
    if (k + k * 2 + k * 4 <= x && k + k * 2 + k * 4 > max)
    {
        max = k + k * 2 + k * 4;
    }
    if (k / 2 + k + k * 2 <= x && k / 2 + k + k * 2 > max)
    {
        max = k / 2 + k + k * 2;
    }
    cout << max * 1000;
    return 0;
}