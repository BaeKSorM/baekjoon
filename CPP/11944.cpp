#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    string nn = "";
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        nn += to_string(n);
    }
    if (nn.length() < m)
    {
        cout << nn;
    }
    else
    {
        for (int i = 0; i < m; ++i)
        {
            cout << nn[i];
        }
    }
}