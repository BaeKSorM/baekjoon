#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0, m = 0, peak, mcnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> peak;
        if (peak > m)
        {
            m = peak;
            cnt = 0;
        }
        else
        {
            cnt++;
            if (cnt > mcnt)
            {
                mcnt = cnt;
            }
        }
    }
    cout << mcnt;
}