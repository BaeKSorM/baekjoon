#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    char al;
    int num;
    while (1)
    {
        num = 0;
        cin >> al;
        if (al == '#')
            break;
        cin.ignore();
        getline(cin, s);
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == al || s[i] == al - 32)
            {
                num++;
            }
        }
        cout << al << ' ' << num << '\n';
    }
}