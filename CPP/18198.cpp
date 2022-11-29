#include <iostream>
using namespace std;

int main()
{
    int A = 0, B = 0, pos = 0;
    string s;
    cin >> s;
    while (1)
    {
        if (s[pos] == 'A')
        {
            pos++;
            A += s[pos] - '0';
            pos++;
        }
        else if (s[pos] == 'B')
        {
            pos++;
            B += s[pos] - '0';
            pos++;
        }
        if (pos == s.length())
            break;
    }
    if (A > B)
        cout << 'A';
    else if (A < B)
        cout << 'B';
}