#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, pair<int, int>> p1, pair<string, pair<int, int>> p2)
{
    return p1.second.first < p2.second.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, pair<int, int>>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second.first >> v[i].second.second;
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; ++i)
    {
        if (v[i].first[v[i].second.second - 1] <= 'Z' && v[i].first[v[i].second.second - 1] >= 'A')
        {
            cout << v[i].first[v[i].second.second - 1];
        }
        else if (v[i].first[v[i].second.second - 1] >= 'a' && v[i].first[v[i].second.second - 1] <= 'z')
        {
            cout << (char)(v[i].first[v[i].second.second - 1] - 32);
        }
        else
        {
            cout << v[i].first[v[i].second.second - 1];
        }
    }
}