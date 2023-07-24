#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long n, tip;
    vector<long> v;
    cin >> n;
    for (long i = 0; i < n; ++i)
    {
        cin >> tip;
        v.push_back(tip);
    }
    sort(v.begin(), v.end(), greater<long>());
    tip = 0;
    for (long i = 0; i < n; ++i)
    {
        tip += (v[i] - i) > 0 ? v[i] - i : 0;
    }
    cout << tip;
}