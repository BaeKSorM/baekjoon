#include <iostream>
#include <map>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	string str[n][2];
	string s;
	map<string, string> map;
	for(int i=0;i<n;++i){
		cin >> str[i][0] >> str[i][1];
		map.insert({str[i][0], str[i][1]});
	}
	for(int i=0;i<m;++i){
		cin >> s;
		cout << map[s] << '\n';
	}
}
