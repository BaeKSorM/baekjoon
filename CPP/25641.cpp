#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n, s, t;
    string st;
    cin >> n >> st;
    deque<char> sottuk;
    for (int i = 0; i < n; ++i)
    {
        sottuk.push_back(st[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        s = 0, t = 0;
        for (int j = 0; j < sottuk.size(); ++j)
        {
            if (sottuk[j] == 's')
                s++;
            else if (sottuk[j] == 't')
                t++;
        }
        if (s != t)
        {
            sottuk.pop_front();
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < sottuk.size(); ++i)
    {
        cout << sottuk[i];
    }
}