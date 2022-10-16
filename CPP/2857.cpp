#include <iostream>
using namespace std;

int main()
{
    string FBI;
    bool fbi = true;
    for (int i = 0; i < 5; ++i)
    {
        cin >> FBI;
        for (int j = 0; j < FBI.length(); ++j)
        {
            if (FBI[j] == 'F' && FBI[j + 1] == 'B' && FBI[j + 2] == 'I')
            {
                cout << i + 1 << ' ';
                fbi = false;
                break;
            }
        }
    }
    if (fbi)
    {
        cout << "HE GOT AWAY!";
    }
}
