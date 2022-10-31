#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, sum = 0, min = 10000;
    cin >> n >> m;
    for (int i = n; i <= m; ++i)
    {
        if ((int)sqrt(i) * sqrt(i) == i)
        {
            sum += i;
            if (min > i)
            {
                min = i;
            }
        }
    }
    if (sum == 0)
    {
        cout << -1;
    }
    else
    {
        cout << sum << '\n'
             << min;
    }
}