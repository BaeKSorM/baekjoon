#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> m1;
    map<int, string> m2;
    int n, m, in;
    string tmp;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        m1[tmp] = i + 1;
        m2[i + 1] = tmp;
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> tmp;
        if (tmp[0] < 58)
        {
            in = stoi(tmp);
            cout << m2[in] << '\n';
            continue;
        }
        cout << m1[tmp] << '\n';
    }
}