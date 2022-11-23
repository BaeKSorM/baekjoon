#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> se;
    int n, m, tem;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> tem;
        se.insert(tem);
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> tem;
        if (se.find(tem) != se.end())
        {
            se.erase(tem);
        }
    }
    if (!se.empty())
    {
        cout << se.size() << '\n';
        for (auto i : se)
        {
            cout << i << ' ';
        }
    }
    else
        cout << 0;
}