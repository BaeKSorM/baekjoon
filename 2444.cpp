#include <iostream>
using namespace std;

int main(){
	int n, c;
	cin >> n;
	c=1;
	for(int i=0;i<n*2-1;++i){
		for(int j=c;j<n;++j) cout << ' ';
		for(int j=0;j<c*2-1;++j) cout << '*';
		cout << '\n';
		if(i<n-1) c++;
		else c--;
	}
} 
