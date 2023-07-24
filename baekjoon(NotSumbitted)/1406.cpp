#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<char> v;
    char c, add;
    int n, cur;
    string s;
    cin >> s >> n;
    for (int i = 0; i < s.length(); ++i)
        v.push_back(s[i]);
    for (int i = 0; i < n; ++i)
    {
        cin >> c;
        if (c == 'P')
        {
            cin >> add;
            v.insert(v.end() - cur, add);
        }
        else if (c == 'L')
        {
            --cur;
        }
        else if (c == 'R')
        {
            ++cur;
        }
    }
    for (auto i : v)
        cout << i;
}