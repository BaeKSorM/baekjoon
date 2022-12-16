#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    sum += v[0].first + v[0].second;
    for (int i = 1; i < n; ++i)
    {
        if (v[i].first >= sum)
        {
            sum = v[i].first + v[i].second;
        }
        else
        {
            sum += v[i].second;
        }
    }
    cout << sum;
}