#include <iostream>
using namespace std;

int cnt;
void han(int n)
{
    int c;
    int s = n % 10;
    int x = n / 10;
    int w = s - x % 10;
    n /= 10;
    s = n % 10;
    x = n / 10;
    if (w != s - x)
        return;
    c = ++cnt;
}

int main()
{
    int n;
    cin >> n;
    cnt = n;
    if (n > 99)
    {
        cnt = 99;
        for (int i = 100; i <= n; ++i)
        {
            han(i);
        }
    }
    cout << cnt;
}