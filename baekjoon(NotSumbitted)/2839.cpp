#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 1500, cmp = 1500;
    cin >> n;
    if (n == 1 || n == 4 || n == 7)
    {
        cout << -1;
        return 0;
    }
    else if (n % 5 == 0)
    {
        cmp = n / 5;
    }
    else if (n % 3 == 0)
    {
        cmp = n / 3;
    }
    if (n % 5 == 2 || n % 5 == 4)
    {
        cnt = n / 5 + 2;
    }
    else if (n % 5 == 1)
    {
        cnt = n / 5 + 1;
    }
    else if (n % 5 % 3 == 0)
    {
        cnt = n / 5;
        n %= 5;
        cnt += n / 3;
    }
    cout << min(cnt, cmp);
}