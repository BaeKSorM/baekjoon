#include <iostream>
using namespace std;

int main(){
	int n, c=0;
	cin >> n;
	for(int i=0;i<n*2-1;++i){
		for(int j=0;j<c;++j){
			cout << '*';
		}
		for(int j=0;j<n-c;++j){
			cout << ' ';
		}
		for(int j=0;j<c;++j){
			cout << '*';
		}
	}
} 
