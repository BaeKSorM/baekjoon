#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, input, sum = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        v.push_back(input);
    }
    sum += v[0];
    for (int i = 1; i < n; ++i)
    {
        if (v[i - 1] + 1 != v[i])
        {
            sum += v[i];
        }
    }
    cout << sum;
}