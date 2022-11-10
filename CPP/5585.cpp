#include <iostream>
using namespace std;

int main()
{
    int mon, cou = 0;
    cin >> mon;
    mon = 1000 - mon;
    cou += mon / 500;
    mon %= 500;
    cou += mon / 100;
    mon %= 100;
    cou += mon / 50;
    mon %= 50;
    cou += mon / 10;
    mon %= 10;
    cou += mon / 5;
    mon %= 5;
    cou += mon / 1;
    cout << cou;
}