#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, input, abl = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    abl += v.back();
    for (int i = 2; i <= n / 2 + 1; ++i)
    {
        abl += v[n - i] - v[i - 2];
    }
    cout << abl;
}