#include <iostream>
using namespace std;

int main()
{
    int n, m, fir, end, ballNum;
    cin >> m >> n;
    int basket[m] = {};
    for (int i = 0; i < n; ++i)
    {
        cin >> fir >> end >> ballNum;
        for (int i = --fir; i < end; ++i)
        {
            basket[i] = ballNum;
        }
    }
    for (int i = 0; i < m; ++i)
    {
        cout << basket[i] << ' ';
    }
}