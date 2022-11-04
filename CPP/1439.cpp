#include <iostream>
using namespace std;
int main()
{
    int cou = 0;
    char c;
    string reverse;
    cin >> reverse;
    c = reverse[0];
    for (int i = 1; i < reverse.length(); ++i)
    {
        if (c == reverse[i - 1] && c != reverse[i])
            cou++;
    }
    cout << cou;
}