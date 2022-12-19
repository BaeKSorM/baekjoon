#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 7 == 1 || n % 7 == 3)
        cout << "CY";
    else
        cout << "SK";
}