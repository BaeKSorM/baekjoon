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
	/*sort(): ������ ���� ��ҵ鿡 ����, �� ��Ұ� ������ ������ �ִ� ������ �������� �ʴ´�
	  stable_sort(): ������ ���� ��ҵ鿡 ����, �� ��Ұ� ������ ������ �ִ� ������ �����Ѵ�
	*/
	for(int i=0;i<n;++i){
		cout << v[i].first << " " << v[i].second << "\n";
	}
}
