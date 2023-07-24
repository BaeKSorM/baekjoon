#include <iostream>
using namespace std;

int main()
{
    int b = 0, s = 0, n;
    string st;
    cin >> n >> st;
    for (int i = 0; i < st.length(); ++i)
    {
        if (st[i] == 'b')
        {
            ++b;
            i += 6;
        }
        else if (st[i] = 's')
        {
            ++s;
            i += 7;
        }
    }
    if (b > s)
        cout << "bigdata?";
    else if (b < s)
        cout << "security!";
    else
        cout << "bigdata? security!";
}