#include <iostream>
using namespace std;

int main()
{
    int d, ma, ds, ff, sum;
    while (1)
    {
        sum = 0;
        d = 0;
        cin >> ff;
        if (ff == -1)
            break;
        for (int i = 0; i < ff; ++i)
        {
            cin >> ma >> ds;
            sum += ma * (ds - d);
            d = ds;
        }
        cout << sum << ' ' << "miles" << '\n';
    }
}