#include <iostream>
using namespace std;

int main(){
	int ar[10], sum=0;
	cin >> ar[0];
	for(int i=1;i<10;++i) {
		cin >> ar[i]; ar[0]-=ar[i];
	}
	cout << ar[0]; 
} 
