#include <iostream>
using namespace std;

int main()
{
    long long x, y, upd = 0;
    cin >> x >> y;
    long box[x][y];
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            cin >> box[i][j];
        }
    }
    for (int i = 1; i < x - 1; ++i)
    {
        for (int j = 1; j < y - 1; ++j)
        {
            if (box[i][j] != 1)
            {
                if (box[i][j] == box[i][j - 1] && box[i][j] == box[i][j + 1] && box[i][j] == box[i - 1][j] && box[i][j] == box[i + 1][j])
                {
                    upd += box[i][j] - 1;
                }
                else if (box[i][j] >= box[i][j - 1] && box[i][j] >= box[i][j + 1] && box[i][j] >= box[i - 1][j] && box[i][j] >= box[i + 1][j])
                {
                    upd += min(box[i][j - 1], min(box[i][j + 1], min(box[i - 1][j], box[i + 1][j])));
                }
                else if (box[i][j] <= box[i][j - 1] && box[i][j] <= box[i][j + 1] && box[i][j] <= box[i - 1][j] && box[i][j] <= box[i + 1][j])
                {
                    upd += min(box[i][j - 1], min(box[i][j + 1], min(box[i - 1][j], box[i + 1][j]))) - 1;
                }
            }
        }
    }
    cout << upd;
}