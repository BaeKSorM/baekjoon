#include <iostream>
using namespace std;

int main()
{
    long n, m, k, d, a, money;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        k = d = a = money = 0;
        cin >> m;
        int kdaMoney[m][3] = {};
        for (int j = 0; j < m; ++j)
        {
            cin >> kdaMoney[j][0] >> kdaMoney[j][1] >> kdaMoney[j][2];
        }
        cin >> k >> d >> a;
        for (int j = 0; j < m; ++j)
        {
            if (kdaMoney[j][0] * k - kdaMoney[j][1] * d + kdaMoney[j][2] * a >= 0)
            {
                money += kdaMoney[j][0] * k - kdaMoney[j][1] * d + kdaMoney[j][2] * a;
            }
        }
        cout << money << '\n';
    }
}