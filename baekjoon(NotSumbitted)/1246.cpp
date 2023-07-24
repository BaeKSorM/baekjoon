#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m, sum = 0, max;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < m; ++i)
    {
        if (i < n)
        {
            if (sum < v[i] * (i + 1))
            {
                sum = v[i] * (i + 1);
                max = v[i];
            }
        }
        else
            break;
    }
    cout << max << ' ' << sum;
}