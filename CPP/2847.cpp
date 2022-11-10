#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, redu = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int end = v[n - 1];
    for (int i = n - 1; i > 0; --i)
    {
        while (v[i] <= v[i - 1])
        {
            v[i - 1]--;
            redu++;
        }
    }
    cout << redu;
}