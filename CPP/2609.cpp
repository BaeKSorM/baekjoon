#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	for(int i=a>b?a:b;i>=1;--i){
		if(a%i==0&&b%i==0){
			cout << i << '\n' << a*b/i;break;
		}
	}
}
