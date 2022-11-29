#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, mx = 0, sum;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
        sum = v[n - 1 - i] * (i + 1);
        mx = max(sum, mx);
    }
    cout << mx;
}