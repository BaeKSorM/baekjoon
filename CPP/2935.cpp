#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    string A, B;
    char symbol;
    cin >> A >> symbol >> B;
    while (1)
    {
        if (!A.empty() && !B.empty())
        {
            switch (symbol)
            {
            case '+':
                v.push_back((A.back() - '0') + (B.back() - '0'));
                break;
            case '*':
                if ((A.back() == '1' && B.back() == '0') || (A.back() == '0' && B.back() == '1'))
                {
                    v.push_back(0);
                    break;
                }
                else if (A.back() == '1' && B.back() == '1')
                {
                    v.push_back(1);
                }
                else
                {
                    v.push_back(0);
                    v.push_back(0);
                    break;
                }
            }
            A.pop_back();
            B.pop_back();
        }
        else if (!A.empty() && B.empty())
        {
            v.push_back(A.back() - '0');
            A.pop_back();
        }
        else if (A.empty() && !B.empty())
        {
            v.push_back(B.back() - '0');
            B.pop_back();
        }
        else if (A.empty() && B.empty())
        {
            break;
        }
    }
    for (int i = v.size() - 1; i >= 0; --i)
    {
        cout << v[i];
    }
}