#include <iostream>
using namespace std;

int main()
{
    int n, ck = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n / 2; ++i)
    {
        if (s[i] != s[n - i - 1])
        {
            ck++;
        }
    }
    cout << ck;
}