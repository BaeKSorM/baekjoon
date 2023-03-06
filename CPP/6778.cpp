#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n >= 3 && m <= 4)
    {
        cout << "TroyMartian" << '\n';
    }
    if (n <= 6 && m >= 2)
    {
        cout << "VladSaturnian" << '\n';
    }
    if (n <= 2 && m <= 3)
    {
        cout << "GraemeMercurian" << '\n';
    }
}