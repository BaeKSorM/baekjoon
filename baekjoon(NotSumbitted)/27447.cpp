#include <iostream>
using namespace std;

int main()
{
    // 손님이 오기2초전에 커피를 담아놔야됨
    // 담고 m초후 흙탕물됨
    // 오기전에 미리 만들어놔도됨
    int n, m, restTime = 0, wholeTime;
    cin >> n >> m;
    int customer[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> customer[i];
        restTime = customer[i] % 2;
        if (restTime > m)
        {
        }
    }
}