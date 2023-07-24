#include <iostream>
using namespace std;

int main()
{
    int n, cent, charge[4] = {25, 10, 5, 1};
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> cent;
        for (int j = 0; j < 4; ++j)
        {
            cout << cent / charge[j] << ' ';
            cent %= charge[j];
        }
        cout << '\n';
    }
}