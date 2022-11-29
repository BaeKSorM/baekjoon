#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, cnt;
    string s;
    cin >> n;
    cnt = n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        if (s[2] == '9' && s[3] > '0')
        {
            cnt--;
        }
        else if (s.length() > 4)
        {
            cnt--;
        }
    }
    cout << cnt;
}