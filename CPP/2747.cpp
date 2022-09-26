#include <iostream>
using namespace std;
int main(){
    int ar1;
    int arr1[ar1 + 1];
    arr1[0] = 0; arr1[1] = 1;
    for (int i = 2; i <= ar1; i++)
    {
        arr1[i] = arr1[i - 1] + arr1[i - 2];
    }
    cout << arr1[ar1];
}
