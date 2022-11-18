#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "int a;" << '\n';
    cout << "int *ptr = &a;" << '\n';
    if (n >= 2)
    {
        cout << "int **ptr2 = &ptr;" << '\n';
        for (int i = 3; i <= n; ++i)
        {
            cout << "int ";
            for (int j = 0; j < i; ++j)
            {
                cout << '*';
            }
            cout << "ptr" << i << " = &ptr" << i - 1 << ';' << '\n';
        }
    }
}