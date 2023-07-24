#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long n, cheap, sum = 0;
    cin >> n;
    vector<int> dis(n - 1);
    vector<int> feul(n);
    for (int i = 0; i < n - 1; ++i)
        cin >> dis[i];
    for (int i = 0; i < n; ++i)
        cin >> feul[i];
    cheap = feul[0];
    for (int i = 0; i < n - 1; ++i)
    {
        if (cheap > feul[i])
        {
            cheap = feul[i];
        }
        sum += cheap * dis[i];
    }
    cout << sum;
}