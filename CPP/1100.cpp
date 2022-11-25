#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string f = "FfFfFfFf";
    string s;
    int ff = 0;
    for (int i = 0; i < 8; ++i)
    {
        cin >> s;
        for (int j = 0; j < 8; ++j)
        {
            if (s[j] == f[j])
            {
                ff++;
            }
        }
        reverse(f.begin(), f.end());
    }
    cout << ff;
}