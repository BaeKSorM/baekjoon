#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 0;
    string s, c;
    getline(cin, s);
    cin >> c;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ' ')
        {
            cout << ' ';
        }
        else
        {
            if (s[i] - (c[a] - 'a' + 1) < 'a')
            {
                cout << (char)(s[i] - (c[a] - 'a' + 1) + 26);
            }
            else
            {
                cout << (char)(s[i] - (c[a] - 'a' + 1));
            }
        }
        a++;
        if (a == c.length())
        {
            a = 0;
        }
    }
}