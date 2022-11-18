#include <iostream>
using namespace std;

int main()
{
    int n, fdb, x = 0;
    cin >> n >> fdb;
    int ar[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> ar[i];
    }
    for (int i = fdb;; i++)
    {
        if (ar[x] < i)
        {
            cout << x + 1;
            break;
        }
        if (++x > n - 1)
        {
            x = 0;
        }
    }
}