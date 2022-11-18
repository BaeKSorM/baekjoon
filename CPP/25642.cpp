#include <iostream>
using namespace std;

int main()
{
    int t, j;
    cin >> t >> j;
    while (1)
    {
        j += t;
        if (j >= 5)
        {
            cout << "yt";
            break;
        }
        t += j;
        if (t >= 5)
        {
            cout << "yj";
            break;
        }
    }
}