#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string i,string j){ 
	/*sort �Լ����� �� ��° ���ڷ� �� �Լ��� �ν��Ͽ�, 
	�ڵ����� �տ� ���� i, �ڿ� ���� j�� �־��ְ� �Ǵµ�, 
	i < j�� ���̸� 1, �����̸� 0�� ��ȯ�ϴ� �Լ��̹Ƿ�, 
	i�� j���� Ŭ ��� sort�� �ǽ��ϰ� �Ǿ� ���ĵȴ�.*/
	if(i.length()==j.length()){
        return i<j;
    }
    return i.length()<j.length();
}

int main(){
	int n;
	cin >> n;
	vector<string> v;
	string blank;
	for(int i=0;i<n;++i){
		cin >> blank;
		v.push_back(blank);
	}
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<n;++i){
		if(v[i]==v[i+1]) continue;
		cout << v[i] << '\n';
	}
}
