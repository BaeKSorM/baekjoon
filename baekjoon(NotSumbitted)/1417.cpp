#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, candidate, ori, need = 0;
    cin >> n >> candidate;
    ori = candidate;
    vector<int> v;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> candidate;
        v.push_back(candidate);
    }
    sort(v.begin(), v.end());
    --v.back();
    ++ori;
}