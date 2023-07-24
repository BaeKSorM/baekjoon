#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long t[n] = {};

    t[0] = 1;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= i; ++j)
            t[i] += t[j - 1] * t[i - j];

    cout << t[n] << endl;

    return 0;
}