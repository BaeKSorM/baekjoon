#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    pair<int, int> yuumi[4];
    vector<pair<int, int>> v;
    int dis = 0;
    for (int i = 0; i < 4; ++i)
    {
        cin >> yuumi[i].first >> yuumi[i].second;
        v[i].push_back(abs(yuumi[i]))
    }
    sort(yuumi, yuumi + 4);
    for (int i = 1; i < 4; ++i)
    {
        dis += sqrt(pow(yuumi[i].first - yuumi[i - 1].first, 2) + pow(yuumi[i].second - yuumi[i - 1].second, 2));
    }
    cout << dis;
}