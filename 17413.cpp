#include<iostream>
#include<stack>
using namespace std;
 
int main(){
	char a;
	stack<char> v;
	string str;
	getline(cin, str);
	str+=" ";
	for(int j=0;j<str.length();++j){
		if(str[j]==' '){
			while(!v.empty()){
				cout << v.top();
				v.pop();
			}
			cout << ' ';
		}
		else if(str[j]=='<'){
			while(!v.empty()){
				cout << v.top();
				v.pop();
			}
		}
		if(str[j]!=' '){
			a=str[j];
			if(a=='<'){
				while(1){
					cout << str[j++];
					if(str[j]=='>'){
						cout <<str[j];
						break;
					}
				}
			}
			else v.push(str[j]);
		}
	}
}
