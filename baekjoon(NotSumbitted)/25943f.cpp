#include <iostream>
using namespace std;

int main()
{
    int n, lSum = 0, rSum = 0, g, st[7] = {100, 50, 20, 10, 5, 2, 1};
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> g;
        if (i % 2 == 0)
            lSum += g;
        else if (i % 2 == 1)
            rSum += g;
    }
    g = 0;
    rSum -= lSum;
    rSum = abs(rSum);
    for (int i = 0; i < 7; ++i)
    {
        if (rSum == 0)
            break;
        g += rSum / st[i];
        rSum %= st[i];
    }
    cout << g;
}