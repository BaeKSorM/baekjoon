#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    long ori = 0, multwo = 1;
    vector<long> v;
    string s;
    cin >> s;
    for (long i = s.length() - 1; i >= 0; --i)
    {
        ori += (s[i] - '0') * multwo;
        multwo *= 2;
    }
    ori *= 17;
    while (ori > 0)
    {
        v.push_back(ori % 2);
        ori /= 2;
    }
    for (long i = v.size() - 1; i >= 0; --i)
    {
        cout << v[i];
    }
}