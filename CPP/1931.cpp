#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, me = 1, f, s;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i)
    {
        cin >> f >> s;
        v.push_back(make_pair(s, f));
    }
    sort(v.begin(), v.end());
    int g = v[0].first;
    for (int j = 1; j < n; ++j)
    {
        if (g <= v[j].second)
        {
            me++;
            g = v[j].first;
        }
    }
    cout << me;
}