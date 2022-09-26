#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string i,string j){ 
	/*sort 함수에서 세 번째 인자로 들어간 함수를 인식하여, 
	자동으로 앞에 수를 i, 뒤에 수를 j에 넣어주게 되는데, 
	i < j가 참이면 1, 거짓이면 0을 반환하는 함수이므로, 
	i가 j보다 클 경우 sort를 실시하게 되어 정렬된다.*/
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
