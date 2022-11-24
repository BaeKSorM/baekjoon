#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

bool com(pair<ll, int> a, pair<ll, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    map<ll, int> m;
    vector<pair<ll, int>> v;
    ll n, c;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> c;
        m[c]++;
    }
    for (auto i : m)
        v.push_back({i.first, i.second});
    sort(v.begin(), v.end(), com);
    cout << v[0].first;
    return 0;
}