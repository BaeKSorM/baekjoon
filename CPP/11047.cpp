#include <iostream>
using namespace std;

int main()
{
    int n = 0, k, coin = 0;
    cin >> n >> k;
    int m[n] = {};
    for (int i = 0; i < n; ++i)
    {
        cin >> m[i];
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (k <= 0)
            break;
        coin += k / m[i];
        k %= m[i];
    }
    cout << coin;
}