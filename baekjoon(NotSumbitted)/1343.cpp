#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int xCnt = 0;
    vector<int> v;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'X')
            ++xCnt;
        if (s[i] == '.' || i == s.length() - 1)
        {
            v.push_back(xCnt);
            xCnt = 0;
        }
    }
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] % 2 != 0)
        {
            cout << -1;
            return 0;
        }
    }
    for (int i = 0; i < v.size(); ++i)
    {
        while (v[i] != 0)
        {
            if (v[i] - 4 >= 0)
            {
                cout << "AAAA";
                v[i] -= 4;
            }
            else if (v[i] - 2 >= 0)
            {
                cout << "BB";
                v[i] -= 2;
            }
        }
        if (i != v.size() - 1)
            cout << '.';
    }
    if (s.back() == '.')
        cout << '.';
}