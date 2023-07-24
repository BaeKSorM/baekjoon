#include <iostream>
using namespace std;

int main()
{
    char w;
    int n;
    cin >> w >> n;
    int ori[n][n] = {};
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> ori[i][j];
        }
    }
    if (w == 'U' || w == 'D')
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (ori[n - (i + 1)][j] == 2)
                {
                    cout << "5 ";
                }
                else if (ori[n - (i + 1)][j] == 5)
                {
                    cout << "2 ";
                }
                else if (ori[n - (i + 1)][j] == 8 || ori[n - (i + 1)][j] == 1)
                {
                    cout << ori[n - (i + 1)][j] << ' ';
                }
                else
                {
                    cout << "? ";
                }
            }
            cout << '\n';
        }
    }
    else if (w == 'R' || w == 'L')
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (ori[i][n - (j + 1)] == 2)
                {
                    cout << "5 ";
                }
                else if (ori[i][n - (j + 1)] == 5)
                {
                    cout << "2 ";
                }
                else if (ori[i][n - (j + 1)] == 8 || ori[i][n - (j + 1)] == 1)
                {
                    cout << ori[i][n - (j + 1)] << ' ';
                }
                else
                {
                    cout << "? ";
                }
            }
            cout << '\n';
        }
    }
}