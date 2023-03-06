#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] - 'A' <= 2)
            cnt += 3;
        else if (s[i] - 'A' <= 5)
            cnt += 4;
        else if (s[i] - 'A' <= 8)
            cnt += 5;
        else if (s[i] - 'A' <= 11)
            cnt += 6;
        else if (s[i] - 'A' <= 14)
            cnt += 7;
        else if (s[i] - 'A' <= 18)
            cnt += 8;
        else if (s[i] - 'A' <= 21)
            cnt += 9;
        else if (s[i] - 'A' <= 25)
            cnt += 10;
    }
    cout << cnt;
}