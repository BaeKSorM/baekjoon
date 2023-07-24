#include <iostream>
using namespace std;

int main()
{
    int md[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int d, m, y, ad;
    while (1)
    {
        ad = 0;
        cin >> d >> m >> y;
        if (d == 0 && m == 0 && y == 0)
            break;
        ad += md[m - 1] + d;
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0) && m > 2)
        {
            ad++;
        }
        cout << ad << '\n';
    }
}