#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int inum, jnum, max = 0;
    vector<vector<int>> v(9, vector<int>(9));
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (v[i][j] >= max)
            {
                max = v[i][j];
                inum = i + 1;
                jnum = j + 1;
            }
        }
    }
    cout << max << '\n'
         << inum << ' ' << jnum;
}