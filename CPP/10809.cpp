#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string str;
	cin >> str;
	vector<int> alpha(26, -1);
	for(int i=0;i<str.length();i++){
		if(alpha[str[i]-'a']==-1){
			alpha[str[i]-'a']=i;
		}
	}
	for(int i=0;i<26;i++){
		cout << alpha[i] << ' ';
	}
}
