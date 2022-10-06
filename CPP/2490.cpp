#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int out;
    vector<int> yut;
    for (int i = 0; i < 3; ++i)
    {
        out = -1;
        yut = {0, 0, 0, 0};
        cin >> yut[0] >> yut[1] >> yut[2] >> yut[3];
        for (int j = 0; j < 4; ++j)
        {
            if (yut[j] == 0)
                out++;
        }
        if (out == -1)
            cout << "E" << '\n';
        else
            cout << (char)('A' + out) << '\n';
    }
}