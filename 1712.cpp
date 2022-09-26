#include <iostream>
using namespace std;

int main(){
	long long int a, b, c;
	cin >> a >> b >> c;
	if(b>=c){
		cout << -1;
		return 0;
	}
	cout << a/(c-b)+1;
} 
