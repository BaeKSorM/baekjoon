#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int P[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> P[i];
    }
    sort(P, P + n);

    for (int i = 0; i < n; ++i)
    {
        sum += (n - i) * P[i];
    }
    cout << sum;
    return 0;
}