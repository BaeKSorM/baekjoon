#include <iostream>
using namespace std;

long gcd(long a, long b)
{
    if (a % b == 0)
        return b;
    else
        gcd(b, a % b);
}
int main()
{
    long n, m, gc;
    char c;
    cin >> n >> c >> m;
    gc = gcd(n, m);
    cout << n / gc << ':' << m / gc;
}