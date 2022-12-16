#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, l, h;
    vector<int> v;
    cin >> n >> l;
    for (int i = 0; i < n; ++i)
    {
        cin >> h;
        v.push_back(h);
    }
    sort(v.begin(), v.end(), less<int>());
    for (int i = 0; i < n; ++i)
    {
        if (l >= v[i])
            ++l;
        else
            break;
    }
    cout << l;
}