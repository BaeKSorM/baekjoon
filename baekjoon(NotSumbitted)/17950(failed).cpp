#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long H, x, sum = 0, snow, cm, tn = pow(10, 9) + 7;
    cin >> H >> x;
    for (long i = 0; i < H; ++i)
    {
        cin >> snow;
        cm = pow(x, i + 1);
        sum += snow * cm % tn;
    }
    cout << sum % tn;
}