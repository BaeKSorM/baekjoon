#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    for (int i = 0; i < n * 2 - 1; ++i)
    {
        for (int j = 0; j <= s; ++j)
        {
            cout << '*';
        }
        puts("");
        if (i < n - 1)
            s++;
        else
        {
            s--;
        }
    }
}