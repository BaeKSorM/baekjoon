#include <iostream>
using namespace std;

int main()
{
    pair<string, int> mbti;
    int n;
    string check;
    mbti.second = 0;
    cin >> mbti.first >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> check;
        if (check == mbti.first)
            mbti.second++;
    }
    cout << mbti.second;
}