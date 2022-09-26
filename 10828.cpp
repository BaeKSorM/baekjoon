#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	int n, pu;
	cin >> n;
	stack<int> s;
	string st;
	while(n--){
		cin >> st;
		if(st=="push"){
			cin >> pu;
			s.push(pu);
		}
		else if(st=="top"){
			if(s.size()==0){
				cout << -1 <<'\n';
			}
			else{
				cout << s.top() <<'\n';
			}
		}
		else if(st=="size"){
			cout << s.size() <<'\n';
		}
		else if(st=="empty"){
			cout << s.empty() <<'\n';
		}
		else if(st=="pop"){
			if(s.size()==0){
				cout << -1 <<'\n';
			}
			else{
				cout << s.top() <<'\n';
				s.pop();
			}
		}
	}
}
