#include <iostream>

using namespace std;

int pibo(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return pibo(n-2)+pibo(n-1);
}

int main(){
	int n, sum=0;
	cin >> n;
	cout << pibo(n);
}
