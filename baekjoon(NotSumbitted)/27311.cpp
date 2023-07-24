#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T, R, C;
    int copyC, oriC;
    int a1, b1, c1, d1, e1;
    int a2, b2, c2, d2, e2;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        a1 = 0, b1 = 0, c1 = 0, d1 = 0, e1 = 0;
        a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0;
        cin >> R >> C;
        oriC = copyC = C;
        char art[R][C];
        for (int j = 0; j < R; ++j)
        {
            for (int k = 0; k < C; ++k)
            {
                cin >> art[j][k];
            }
        }
        for (int j = 0; j < R; ++j)
        {
            b1 = 0;
            for (int k = c1; k < C; ++k)
            {
                if (art[j][k] == '#')
                {
                    a1 = k;
                    b1 += 1;
                }
            }
            if (e1 < b1)
                e1 = b1;
            if (e1 != b1)
                break;
            d1 += b1;
            if (b1 != 0)
            {
                c1 = a1 - (b1 - 1);
                C = a1 + 1;
            }
        }
        for (int j = R - 1; j >= 0; --j)
        {
            b2 = 0;
            for (int k = c2; k < copyC; ++k)
            {
                if (art[j][k] == '#')
                {
                    a2 = k;
                    b2 += 1;
                }
            }
            if (e2 < b2)
                e2 = b2;
            if (e2 != b2)
                break;
            d2 += b2;
            if (b2 != 0)
            {
                c2 = a2 - (b2 - 1);
                copyC = a2 + 1;
            }
        }
        b1 = e1 = 0;
        for (int j = 0; j < R; ++j)
        {
            a1 = 0;
            for (int k = 0; k < oriC; ++k)
            {
                if (art[j][k] == '#')
                {
                    ++a1;
                }
            }
            if (a1 != 0 && a1 != b1)
            {
                b1 = a1;
                ++e1;
            }
        }
        cout << ((c1 == c2 ^ C == copyC) && (d1 == d2) && (e1 <= 2)) << "\n";
    }
}