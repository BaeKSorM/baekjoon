#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, check = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        int ar[26] = {};
        for (int i = 0; i < s.length(); ++i)
        {
            ++ar['a' - s[i]];
            if (s[i] == s[i - 1])
            {
                --ar['a' - s[i]];
            }
            if (ar['a' - s[i]] == 2)
            {
                break;
            }
            if (i == s.length() - 1)
            {
                ++check;
            }
        }
    }
    cout << check;
}