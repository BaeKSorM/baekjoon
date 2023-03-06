#include <iostream>
using namespace std;

int main()
{
    int n, v, cnt = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> v;
        ar[i] = v;
    }
    cin >> v;
    for (int i = 0; i < n; ++i)
    {
        if (ar[i] == v)
            ++cnt;
    }
    cout << cnt;
}