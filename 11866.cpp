#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n, m, temp;
	queue<int> v;
	cin >> n >> m;
	for(int i=1;i<=n;++i) v.push(i);
	for(int i=0;i<n-1;++i){
		for(int j=1;j<m;++j){
			temp=v.front();
			v.pop();
			v.push(temp);
		}
		v.pop();
	}
	cout << v.front();
}
