#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a[100];
    cin >> a;
    cout << stoi(a, NULL, 16);
}