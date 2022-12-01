#include <iostream>
using namespace std;

int main()
{
    int HIARC[5] = {};
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'H')
            HIARC[0]++;
        else if (s[i] == 'I')
            HIARC[1]++;
        else if (s[i] == 'A')
            HIARC[2]++;
        else if (s[i] == 'R')
            HIARC[3]++;
        else if (s[i] == 'C')
            HIARC[4]++;
    }
    cout << min(HIARC[0], min(HIARC[1], min(HIARC[2], min(HIARC[3], HIARC[4]))));
}