#include <iostream>
using namespace std;

int main()
{
    int n, m, wid, r, apple, mov = 0, f = 1;
    cin >> n >> m >> r;
    wid = m;
    for (int i = 0; i < r; ++i)
    {
        cin >> apple;
        if (apple >= m)
        {
            while (m <= n)
            {
                if (apple >= f && apple <= m)
                    break;
                ++f;
                ++m;
                ++mov;
            }
        }
        else
        {
            while (m != wid)
            {
                if (apple >= f && apple <= m)
                    break;
                --f;
                --m;
                ++mov;
            }
        }
    }
    cout << mov;
}