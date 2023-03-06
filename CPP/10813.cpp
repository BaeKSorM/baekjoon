#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    int basket[n];
    for (int i = 1; i <= n; ++i)
    {
        basket[i - 1] = i;
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> a >> b;
        swap(basket[a - 1], basket[b - 1]);
    }
    for (int i = 0; i < n; ++i)
    {
        cout << basket[i] << ' ';
    }
}