#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, atom;
    cin >> n;
    for (int k = 0; k < n; ++k)
    {
    go:
        cin >> atom;
        if (atom <= 2)
        {
            cout << "No" << '\n';
            continue;
        }
        else
        {
            vector<int> v;
            v.push_back(2);
            for (int i = 2; i < atom - 1; ++i)
            {
                for (int j = 2; j <= (int)sqrt(atom); ++j)
                {
                    if (i % j == 0)
                    {
                        break;
                    }
                    if (j == (int)sqrt(atom))
                    {
                        v.push_back(i);
                        break;
                    }
                }
            }
            for (int i = 0; i < v.size(); ++i)
            {
                for (int j = 0; j < v.size(); ++j)
                {
                    if (v[i] == v[j])
                        continue;
                    if (atom - v[i] == v[j])
                    {
                        cout << "Yes" << '\n';
                        goto go;
                    }
                }
                if (i == v.size() - 1)
                    cout << "No" << '\n';
            }
        }
    }
}