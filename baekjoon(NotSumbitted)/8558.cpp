#include <iostream>
using namespace std;

int main()
{
    int n, sum = 1;
    cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        sum *= i;
    }
    if (sum < 10)
        cout << sum;
    else
        cout << sum % (sum / 10 * 10);
}