#include <iostream>
using namespace std;

int main()
{
    int l, p, v, camp;
    for (int i = 0;; ++i)
    {
        camp = 0;
        cin >> l >> p >> v;
        if (l == 0 && p == 0 && v == 0)
            break;
        camp = v / p * l;
        if (v % p >= l)
            camp += l;
        else
            camp += v % p;
        cout << "Case " << i + 1 << ": " << camp << '\n';
    }
}