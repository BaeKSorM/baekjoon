#include <iostream>
using namespace std;

int main(){
	int n, c=0, m=0;
	cin >> n;
	for(int i=0;i<n*2-1;++i){
		for(int j=0;j<c;++j){
			cout << " ";
		}
		for(int j=c;j<n*2-1-c;++j){
			cout << "*";
		}
		if(c<n-1&&m==0) c++;
		else {
			c--; m++;
		}
		cout << "\n";
	}
}
