#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, fir, end;
    cin >> n >> m;
    int basket[n];
    for (int i = 1; i <= n; ++i)
    {
        basket[i - 1] = i;
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> fir >> end;
        for (int j = 0; j <= (end - fir) / 2; ++j)
        {
            swap(basket[fir - 1 + j], basket[end - 1 - j]);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << basket[i] << ' ';
    }
}