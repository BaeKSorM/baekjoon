#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    string s;
    while (1)
    {
        getline(cin, s);
        if (s == "#")
            break;
        c = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            s[i] = tolower(s[i]);
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
            {
                c++;
            }
        }
        cout << c << '\n';
    }
}