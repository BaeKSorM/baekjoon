#include <iostream>
using namespace std;

int main(){
	int alpha[26]={0,};
	string a;
	cin >> a; 
	for(int i=0;i<=a.length();++i){
		for(int j=0;j<26;++j){
			if(a[i]=='a'+j){
				alpha[j]++;
			}
		}
	}
	for(int i=0;i<26;++i){
		cout << alpha[i] << ' ';
	}
}
