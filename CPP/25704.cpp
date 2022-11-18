#include <iostream>
using namespace std;

int main()
{
    int n, p, ch;
    cin >> n >> p;
    ch = p;
    if (n >= 5)
    {
        ch = min(ch, p - 500);
    }
    if (n >= 10)
    {
        ch = min(ch, p - p / 10);
    }
    if (n >= 15)
    {
        ch = min(ch, p - 2000);
    }
    if (n >= 20)
    {
        ch = min(ch, p - p / 4);
    }
    if (ch < 0)
        cout << 0;
    else
    {
        cout << ch;
    }
}