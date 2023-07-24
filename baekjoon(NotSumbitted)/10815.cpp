#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; ++i)
    {
        cin >> m;
        v1.push_back(m);
    }
    cin >> m;
    vector<int> v2;
    sort(v1.begin(), v1.end());
    for (int i = 0; i < m; ++i)
    {
        cin >> n;
        v2.push_back(binary_search(v1.begin(), v1.end(), n));
    }
    for (auto i : v2)
    {
        cout << i << ' ';
    }
}