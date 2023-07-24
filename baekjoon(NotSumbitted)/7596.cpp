#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string s1, string s2)
{
    int len = s1.length() > s2.length() ? s1.length() : s2.length();
    for (int i = 0; i < len; ++i)
    {
        if (s1[i] < s2[i])
            return s1[i] < s2[i];
        else if (s2[i] < s1[i])
            return s2[i] > s1[i];
    }
}

int main()
{
    int n;
    for (int i = 1;; ++i)
    {
        cin >> n;
        vector<string> v(n);
        if (n == 0)
            break;
        cin.ignore();
        for (int j = 0; j < n; ++j)
            getline(cin, v[j]);
        sort(v.begin(), v.end(), cmp);
        cout << i << '\n';
        for (int j = 0; j < n; ++j)
        {
            cout << v[j] << '\n';
        }
    }
}