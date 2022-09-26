#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> v(5);
	for(int i=0;i<5;++i){
		cin >> v[i];
	}
	sort(v.begin(), v.end()-2);
	sort(v.begin()+2,v.end());
	cout << v.front()+v[2]-50;
}
