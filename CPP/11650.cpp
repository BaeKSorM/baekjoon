#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

bool cmp(pair<int, int> i, pair<int, int> j){
	if(i.first<j.first){
		return true;
	}
	else if(i.first==j.first){
		return i.second<j.second;
	}
	else return false;
}

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for(int i=0;i<n;++i){
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(), cmp);
	for(int i=0;i<n;++i){
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
}
