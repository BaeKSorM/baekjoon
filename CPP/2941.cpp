#include <iostream>
using namespace std;

int main()
{
    int w = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'c' && (s[i + 1] == '-' || s[i + 1] == '='))
        {
            ++i;
            ++w;
        }
        else if (s[i] == 'd')
        {
            if (s[i + 1] == '-')
            {
                ++i;
                ++w;
            }
            else if (s[i + 1] == 'z' && s[i + 2] == '=')
            {
                i += 2;
                ++w;
            }
            else
                ++w;
        }
        else if (s[i] == 'l' && s[i + 1] == 'j')
        {
            ++i;
            ++w;
        }
        else if (s[i] == 'n' && s[i + 1] == 'j')
        {
            ++i;
            ++w;
        }
        else if ((s[i] == 's' || s[i] == 'z') && s[i + 1] == '=')
        {
            ++i;
            ++w;
        }
        else
            ++w;
    }
    cout << w;
}