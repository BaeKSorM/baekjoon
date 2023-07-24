#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int d = 10;
    const int n = 8;
    string b = bitset<n>(d).to_string();
    cout << b;
}