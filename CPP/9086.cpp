#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> s;
        cout << s[0] << s[s.length() - 1] << '\n';
    }
}