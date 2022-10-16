#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> del(n);
    vector<string> str(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> del[i] >> str[i];
    }
    for (int i = 0; i < n; ++i)
    {
        str[i].erase(str[i].begin() + del[i] - 1);
        cout << str[i] << '\n';
    }
}