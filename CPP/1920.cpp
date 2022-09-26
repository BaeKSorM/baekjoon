#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long int a, b;
    cin >> a >> b;
    cout << (a+b)*(a-b);
}
