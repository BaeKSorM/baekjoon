#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, z, sum = 0;
    cin >> n;
    vector<int> q;
    for (int i = 0; i < n; ++i)
    {
        cin >> z;
        if (z == 0)
        {
            q.pop_back();
            continue;
        }
        else
        {
            q.push_back(z);
        }
    }
    while (q.size() > 0)
    {
        sum += q.back();
        q.pop_back();
    }
    cout << sum;
}