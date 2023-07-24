#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string word;
    int n, asw = 0;
    cin >> n;
    while (n--)
    {
        stack<char> st;
        cin >> word;
        for (int i = 0; i < word.length(); ++i)
        {
            if (st.empty())
            {
                st.push(word[i]);
            }
            else
            {
                if (st.top() == word[i])
                {
                    st.pop();
                }
                else
                {
                    st.push(word[i]);
                }
            }
        }
        if (st.empty())
        {
            ++asw;
        }
    }
    cout << asw;
}