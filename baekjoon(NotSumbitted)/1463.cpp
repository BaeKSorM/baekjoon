#include <iostream>
using namespace std;

int main()
{
    int x, n, cnt1 = 0, cnt2 = 0;
    cin >> n;
    x = n;
    while (x != 1)
    {
        if (x % 3 == 0)
        {
            x /= 3;
            ++cnt1;
        }
        else if (x % 3 != 0)
        {
            x -= 1;
            ++cnt1;
        }
        else if (x % 2 == 0)
        {
            x /= 2;
            ++cnt1;
        }
    }
    cout << cnt1;
}