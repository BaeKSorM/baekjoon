#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<int, int> M;
    int n, m, num;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        M[num]++;
    }
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> num;
        cout << M[num] << ' ';
    }
}