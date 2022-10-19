#include <iostream>
using namespace std;

int main()
{
    int n, m, dif = 0, nar = 0;
    cin >> n >> m;
    int in[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> in[i];
    }
    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = i + 1; j < n - 1; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (in[i] + in[j] + in[k] <= m)
                {
                    if (in[i] + in[j] + in[k] > nar)
                    {
                        nar = in[i] + in[j] + in[k];
                    }
                }
            }
        }
    }
    cout << nar;
}