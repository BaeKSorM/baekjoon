#include <iostream>
using namespace std;

int main()
{
    int difficulty = 0;
    string emogi;
    cin >> emogi;
    for (int i = 0; i < emogi.length(); ++i)
    {
        if (emogi[i] == ':')
            difficulty += 1;
        else if (emogi[i] == '_')
            difficulty += 5;
    }
    cout << difficulty + emogi.length();
}