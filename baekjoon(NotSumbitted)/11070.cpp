#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    long P1_PYTHA_EXP = pow(p1.first, 2) / (pow(p1.first, 2) + pow(p1.second, 2)) * 1000;
    long P2_PYTHA_EXP = pow(p2.first, 2) / (pow(p2.first, 2) + pow(p2.second, 2)) * 1000;

    if (P1_PYTHA_EXP > P2_PYTHA_EXP)
        return 1;
    else
        return 0;
}

int main()
{
    int t, n, m, a, b, ap = 0, bp = 0;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n >> m;
        vector<pair<long, long>> point(n);
        for (int j = 0; j < m; ++j)
        {
            cin >> a >> b >> ap >> bp;
            point[a - 1].first += ap;  // a팀의 득점
            point[b - 1].first += bp;  // b팀의 득점
            point[a - 1].second += bp; // a팀의 실점
            point[b - 1].second += ap; // b팀의 실점
        }
        sort(point.begin(), point.end(), cmp); // 기댓값순 정렬
        long Ma = long(pow(point.front().first, 2) / (pow(point.front().first, 2) + pow(point.front().second, 2)) * 1000);
        long Mi = long(pow(point.back().first, 2) / (pow(point.back().first, 2) + pow(point.back().second, 2)) * 1000);
        if (point.front().first == 0 && point.front().second == 0)
        {
            Ma = 0;
        }
        if (point.back().first == 0 && point.back().second == 0)
        {
            Mi = 0;
        }
        cout << Ma << '\n'
             << Mi << '\n';
    }
}