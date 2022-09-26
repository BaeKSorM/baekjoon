#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n;
	string str;
	stack<char> v;
	cin >> n;
	cin.ignore();
	for(int i=0;i<n;++i){
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
			else if(str[j]!=' '){
				v.push(str[j]);
			}
		}
		cout << '\n';
	}
}
