#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    else
        return p1.second > p2.second;
}

int main()
{
    int n;
    map<string, int> m;
    string tmp;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        m[tmp]++;
    }
    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    cout << v[0].first;
}