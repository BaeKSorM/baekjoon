#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, tree;
    vector<int> v;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> tree;
        v.push_back(tree);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
        v[i] += n - i + 1;
    }
    sort(v.begin(), v.end());
    cout << v.back();
}