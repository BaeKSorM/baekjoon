#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	vector<int> v;
	for(int i=0;i<28;++i){
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	for(int i=1;i<=30;++i){
		if(binary_search(v.begin(), v.end(), i)==0){
			cout << i << '\n';
		}
	}
}
