#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, input;
    string que;
    queue<int> q;
    cin >> n;
    while (n--)
    {
        cin >> que;
        if (que == "push")
        {
            cin >> input;
            q.push(input);
            continue;
        }
        else if (que == "front")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << q.front() << '\n';
            continue;
        }
        else if (que == "back")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << q.back() << '\n';
            continue;
        }
        else if (que == "size")
        {
            cout << q.size() << '\n';
            continue;
        }
        else if (que == "empty")
        {
            cout << q.empty() << '\n';
            continue;
        }
        else if (que == "pop")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << q.front() << '\n';
            q.pop();
            continue;
        }
    }
}
