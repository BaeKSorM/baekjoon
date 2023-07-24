#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(5);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
        sort(v.begin(), v.end());
        cout << "Case #" << i + 1 << ": " << v.back() << '\n';
    }
}