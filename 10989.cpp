#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, a;
	cin >> n;
	int ar[10001]={0,};
	for(int i=0;i<n;++i){
		cin >> a;
		ar[a]++;
	} 
	for(int i=0;i<10001;++i){
		for(int j=0;j<ar[i];j++){
			cout << i << '\n';
		}
	}
}
