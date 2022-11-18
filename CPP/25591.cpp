#include <iostream>
using namespace std;

int main()
{
    int f, s, a, b, c, d, q, r;
    cin >> f >> s;
    a = 100 - f;
    b = 100 - s;
    c = 100 - (100 - f) - (100 - s);
    d = (100 - f) * (100 - s);
    q = d / 100;
    r = d % 100;
    cout
        << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n'
        << c + q << ' ' << r;
}