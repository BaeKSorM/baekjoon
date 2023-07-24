#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sum = 0, num;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        sum += pow(num / 10, num % 10);
    }
    cout << sum;
}