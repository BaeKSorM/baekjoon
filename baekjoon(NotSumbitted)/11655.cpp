#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 'n')
            cout << (char)(s[i] - 13);
        else if (s[i] >= 'a')
            cout << (char)(s[i] + 13);
        else if (s[i] >= 'N')
            cout << (char)(s[i] - 13);
        else if (s[i] >= 'A')
            cout << (char)(s[i] + 13);
        else
            cout << s[i];
    }
}