#include <iostream>
using namespace std;

int main()
{
    char ascii;
    string s = "ILOVEYONSEI";
    cin >> ascii;
    int sum = 0;
    sum += abs(ascii - s[0]);
    for (int i = 1; i < s.length(); ++i)
    {
        sum += abs(s[i - 1] - s[i]);
    }
    cout << sum;
}