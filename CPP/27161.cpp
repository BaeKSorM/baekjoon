#include <iostream>
using namespace std;

int main()
{
    int n, time = 1, add = 1, x;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s >> x;
        if (s != "HOURGLASS" && x == time)
        {
            cout << time << " YES\n";
        }
        else
        {
            cout << time << " NO\n";
        }
        if (s == "HOURGLASS" && x != time)
        {
            add = -add;
        }
        time += add;
        if (time > 12)
            time = 1;
        if (time < 1)
            time = 12;
    }
}