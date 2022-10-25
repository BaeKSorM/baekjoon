#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int a, o, befo, m = 0;
    for (int i = 0; i < 3; ++i)
    {
        cin >> a;
        m = 1;
        o = 1;
        befo = a % 10;
        a /= 10;
        while (a > 0)
        {
            if (a % 10 == befo)
            {
                o++;
            }
            else
                o = 1;
            m = max(o, m);
            befo = a % 10;
            a /= 10;
        }
        cout << m << '\n';
    }
}