#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, x;
    string s;
    string fruit[4] = {"STRAWBERRY", "BANANA", "LIME", "PLUM"};
    map<string, int> m;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s >> x;
        m[s] += x;
    }
    for (int i = 0; i < 4; ++i)
    {
        if (m[fruit[i]] == 5)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}