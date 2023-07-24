#include <iostream>
using namespace std;

int d(int n)
{
    int sum = n;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    bool b[10001] = {};
    for (int i = 1; i < 10001; ++i)
    {
        int n = d(i);
        if (n < 10001)
            b[n] = true;
    }
    for (int i = 1; i < 10001; ++i)
    {
        if (!b[i])
            cout << i << '\n';
    }
}