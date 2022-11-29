#include <string>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int cnt = 0;
    string sck;
    vector<string> v;
    string s, ck;
    getline(cin, s);
    cin >> ck;
    stringstream sm;
    sm.str(s);
    while (sm >> sck)
    {
        v.push_back(sck);
    }
    cnt = v.size();
    for (auto i : v)
    {
        if (i.length() > ck.length())
        {
            for (int j = 0; j < ck.length(); ++j)
            {
                if (ck[j] != i[j])
                {
                    cnt--;
                    break;
                }
            }
        }
        else
            cnt--;
    }
    cout << cnt;
}