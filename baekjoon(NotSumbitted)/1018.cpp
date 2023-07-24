#include <iostream>
using namespace std;

int BW(string s[], int n, int m)
{
    int cnt = 0;
    string ss[8] = {"BWBWBWBW",
                    "WBWBWBWB",
                    "BWBWBWBW",
                    "WBWBWBWB",
                    "BWBWBWBW",
                    "WBWBWBWB",
                    "BWBWBWBW",
                    "WBWBWBWB"};
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (s[i + n][j + m] != ss[i][j])
            {
                ++cnt;
            }
        }
    }
    return cnt;
}
int WB(string s[], int n, int m)
{
    int cnt = 0;
    string ss[8] = {"WBWBWBWB",
                    "BWBWBWBW",
                    "WBWBWBWB",
                    "BWBWBWBW",
                    "WBWBWBWB",
                    "BWBWBWBW",
                    "WBWBWBWB",
                    "BWBWBWBW"};
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (s[i + n][j + m] != ss[i][j])
            {
                ++cnt;
            }
        }
    }
    return cnt;
}
int main()
{
    int n, m, mi = 64;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n - 7; ++i)
    {
        for (int j = 0; j < m - 7; ++j)
        {
            mi = min(mi, min(BW(s, i, j), WB(s, i, j)));
        }
    }
    cout << mi;
}