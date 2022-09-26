#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, string> i, pair<int, string> j){
	return i.first < j.first;
}

int main(){
	int n;
	cin >> n;
	vector<pair<int, string>> v(n);
	for(int i=0;i<n;++i){
		cin >> v[i].first >> v[i].second;
	}
	stable_sort(v.begin(), v.end(), comp);
	/*sort(): 동일한 값의 요소들에 대해, 두 요소가 기존에 가지고 있던 순서를 보장하지 않는다
	  stable_sort(): 동일한 값의 요소들에 대해, 두 요소가 기존에 가지고 있던 순서를 보장한다
	*/
	for(int i=0;i<n;++i){
		cout << v[i].first << " " << v[i].second << "\n";
	}
}
