#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string ten;
    cin >> ten;
    for (int i = 1; i <= ten.length(); ++i)
    {
        cout << ten[i - 1];
        if (i % 10 == 0)
            cout << '\n';
    }
}