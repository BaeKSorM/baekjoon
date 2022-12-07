#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first > p2.first;
}

int main()
{
    long long n, sum = 0;
    cin >> n;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(), p.end(), com);
    for (int i = 0; i < n; ++i)
    {
        sum += p[i].first * (n - i) + p[i].second;
    }
    cout << sum;
}