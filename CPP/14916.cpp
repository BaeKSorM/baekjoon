#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0, cmp = 50000;
    cin >> n;
    if (n == 1 || n == 3)
    {
        cout << -1;
        return 0;
    }
    else if (n % 5 == 0)
    {
        cmp = n / 5;
    }
    else if (n % 2 == 0)
    {
        cmp = n / 2;
    }
    if (n % 5 == 1)
    {
        cnt += n / 5 + 2;
    }
    else if (n % 5 == 3)
    {
        cnt += n / 5 + 3;
    }
    else if (n % 5 % 2 == 0)
    {
        cnt += n / 5;
        n %= 5;
        cnt += n / 2;
    }
    cout << min(cnt, cmp);
}