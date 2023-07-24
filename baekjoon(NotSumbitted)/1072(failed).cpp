#include <iostream>
using namespace std;

int main()
{
    long x, y, z;
    cin >> x >> y;
    z = y * 100 / x;
    if (z >= 99)
    {
        cout << -1;
        return 0;
    }
    for (int i = 1;; ++i)
    {
        if ((y + i) * 100 / (x + i) != z)
        {
            cout << i;
            break;
        }
    }
}