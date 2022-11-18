#include <iostream>
using namespace std;

int main()
{
    int n, a, b, m = 1001;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        if (a <= b)
        {
            m = min(m, b);
        }
    }
    if (m != 1001)
        cout << m;
    else
        cout << -1;
}