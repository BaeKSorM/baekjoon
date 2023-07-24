#include <iostream>
#include <queue>
using namespace std;

int main()
{
    string s;
    bool ch;
    queue<char> q1;
    queue<char> q2;
    while (1)
    {
        if (!q1.empty() || !q2.empty())
        {
            while (!q1.empty())
            {
                q1.pop();
            }
            while (!q2.empty())
            {
                q2.pop();
            }
        }
        ch = true;
        getline(cin, s);
        if (s == ".")
        {
            break;
        }
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(')
                q1.push(s[i]);
            else if (s[i] == ')')
            {
                if (q1.size() == 0)
                {
                    cout << "no" << '\n';
                    break;
                }
                else
                {
                    q1.pop();
                }
            }
            if (s[i] == '[')
                q2.push(s[i]);
            else if (s[i] == ']')
            {
                if (q2.size() == 0)
                {
                    cout << "no" << '\n';
                    ch = false;
                    break;
                }
                else
                {
                    q2.pop();
                }
            }
        }
        if (q1.empty() && q2.empty())
        {
            cout << "yes" << '\n';
        }
        else
        {
            if (ch)
            {
                cout << q1.size() << ' ' << q2.size() << '\n';
                cout << "no" << '\n';
            }
        }
    }
}