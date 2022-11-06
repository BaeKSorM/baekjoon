#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3);
    vector<char> abc(3);
    cin >> v[0] >> v[1] >> v[2] >> abc[0] >> abc[1] >> abc[2];
    sort(v.begin(), v.end());
    for (int i = 0; i < 3; ++i)
    {
        if (abc[i] == 'A')
            cout << v[0] << ' ';
        else if (abc[i] == 'B')
            cout << v[1] << ' ';
        else if (abc[i] == 'C')
            cout << v[2] << ' ';
    }
}