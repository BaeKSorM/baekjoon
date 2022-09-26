#include <iostream>
using namespace std;

int main(){
	int alpha[26]={0,}, max=-1, al, m;
	string len;
	cin >> len;
	for(int i=0;i<=len.length();++i) {
		for(int j=0;j<26;++j) {
			if(len[i]=='a'+j||len[i]=='A'+j) {
				alpha[j]++;break;
			}
		}
	}
	for(int i=0;i<26;++i){
		if(alpha[i]>max) {
			max=alpha[i];
			al=i;
		}
	}
	m='A'+al;
	for(int i=al+1;i<26;i++){
		if(max==alpha[i]){
			cout << '?';
			return 0;
		}
	}
	cout << (char)m;
}
