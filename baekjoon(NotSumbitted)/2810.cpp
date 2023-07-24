#include <iostream>
using namespace std;

int main()
{
    int n, c;
    string s;
    cin >> n >> s;
    c = 1;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'S')
        {
            ++c;
        }
        else
        {
            ++i;
            ++c;
        }
    }
    if (c > n)
        cout << n;
    else
        cout << c;
}