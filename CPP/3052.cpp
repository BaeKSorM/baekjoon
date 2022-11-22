#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int temp;
    for (int i = 0; i < 10; ++i)
    {
        cin >> temp;
        s.insert(temp % 42);
    }
    cout << s.size();
}