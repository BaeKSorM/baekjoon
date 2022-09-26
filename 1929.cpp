#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int ar[m];
	for(int i=n;i<=m;++i) ar[i]=i;
	for(int i=2;i<=sqrt(m);++i){
		for(int j=i*2;j<=m;j+=i){
			ar[j]=0;
		}
	} 
	for(int i=2;i<=m;++i){
		if(ar[i]!=0) cout << ar[i] << '\n';
	}
}
