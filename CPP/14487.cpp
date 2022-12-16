#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    cout << sum - v[n - 1];
}