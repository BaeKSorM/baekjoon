#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n, input;
    deque<int> d;
    string str;
    cin >> n;
    while (n--)
    {
        cin >> str;
        if (str == "push_front")
        {
            cin >> input;
            d.push_front(input);
        }
        else if (str == "push_back")
        {
            cin >> input;
            d.push_back(input);
        }
        else if (str == "pop_front")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << d.front() << '\n';
            d.pop_front();
        }
        else if (str == "pop_back")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << d.back() << '\n';
            d.pop_back();
        }
        else if (str == "size")
        {
            cout << d.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << d.empty() << '\n';
        }
        else if (str == "front")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << d.front() << '\n';
        }
        else if (str == "back")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << d.back() << '\n';
        }
    }
}