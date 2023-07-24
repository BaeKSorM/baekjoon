#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n, em;
    string s;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; ++i)
    {
        em = 0;
        getline(cin, s);
        istringstream ss(s);
        vector<string> v;
        string input;
        while (getline(ss, input, ' '))
            v.push_back(input);
        cout << "Case #" << i << ": ";
        for (int i = v.size() - 1; i >= 0; --i)
            cout
                << v[i]
                << ' ';
        cout << '\n';
    }
}