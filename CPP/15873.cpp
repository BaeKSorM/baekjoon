#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;
    string A, B;
    cin >> A;
    for (int i = 0; i < A.length(); ++i)
    {
        if (A[i] == '0')
        {
            sum += (A[i - 1] - '0') * 10 - (A[i - 1] - '0');
        }
        else
        {
            sum += (A[i] - '0');
        }
    }
    cout << sum;
}