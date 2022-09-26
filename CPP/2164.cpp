#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n, temp;
	cin >> n;
	queue<int> v;
	for(int i=1;i<=n;++i){
		v.push(i);
	}
	for(int i=1;i<n;++i){
		v.pop();
		temp=v.front();
		v.push(temp);
		v.pop();
	}
	cout << v.front();
}
