#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, sum = 0, m;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        sum += v[i];
    }
    cout << sum << '\n';
    for (int i = 0; i < n; ++i)
    {
        cin >> m;
        if (m == 1)
            sum -= v[i];
    }
    cout << sum;
}