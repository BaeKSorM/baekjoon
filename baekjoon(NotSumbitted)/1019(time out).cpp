#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int64_t n, m, ss, i, j;
    cin >> n >> m;
    ss = m - n + 1;
    for (i = n; i <= m; ++i)
    {
        for (j = 2; j <= sqrt(m); ++j)
        {
            if (i % (j * j) == 0)
            {
                ss--;
                break;
            }
        }
    }
    cout << ss;
}