#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < max(s1.length(), s2.length()); ++i)
    {
        if (s1[i] == '6')
        {
            s1[i] = '5';
        }
        if (s2[i] == '6')
        {
            s2[i] = '5';
        }
    }
    cout << stoi(s1) + stoi(s2) << ' ';
    for (int i = 0; i < max(s1.length(), s2.length()); ++i)
    {
        if (s1[i] == '5')
        {
            s1[i] = '6';
        }
        if (s2[i] == '5')
        {
            s2[i] = '6';
        }
    }
    cout << stoi(s1) + stoi(s2);
}