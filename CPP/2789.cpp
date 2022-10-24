#include <iostream>
using namespace std;

int main()
{
    bool ox;
    string s;
    char out[9] = {'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E'};
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        ox = true;
        for (int j = 0; j < 9; ++j)
        {
            if (s[i] == out[j])
            {
                ox = false;
                break;
            }
        }
        if (ox)
        {
            cout << s[i];
        }
    }
}