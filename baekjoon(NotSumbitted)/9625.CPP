#include <iostream>
using namespace std;

int main()
{
    int n;
    int a1 = 0, a2 = 0, b = 1;
    cin >> n;
    for (int i = 1; i < n; ++i)
    {
        a1 = b;
        b += a2;
        a2 = a1;
    }
    cout << a1 << ' ' << b;
}