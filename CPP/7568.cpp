#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<vector<int>> v(n, vector<int>(2));
	vector<int> cut(n, n+1);
	for(int i=0;i<n;++i){
		cin >> v[i][0] >> v[i][1];
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(v[i][0]>=v[j][0]||v[i][1]>=v[j][1]) cut[i]--;
		}
	}
	for(int i=0;i<n;++i) cout << cut[i] << " ";
}
