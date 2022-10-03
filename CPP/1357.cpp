#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int x, y;
    int sum;
    string a, b, result;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    x = stoi(a);
    y = stoi(b);
    sum = x + y;
    result = to_string(sum);
    reverse(result.begin(), result.end());
    cout << stoi(result);
}