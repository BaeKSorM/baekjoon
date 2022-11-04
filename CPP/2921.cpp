#include <iostream>
using namespace std;

int main()
{
    int N, dot = 0;
    cin >> N;
    for (int i = 0; i <= N; ++i)
    {
        for (int j = i; j <= N; ++j)
        {
            dot += i + j;
        }
    }
    cout << dot;
}