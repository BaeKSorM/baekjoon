#include <iostream>
using namespace std;

int main(){
	int a, b;
	int ar[5];
	cin >> a >> b;
	for(int i=0;i<5;++i) cin >> ar[i];
	for(int i=0;i<5;++i) cout << ar[i]-a*b << ' ';
}
