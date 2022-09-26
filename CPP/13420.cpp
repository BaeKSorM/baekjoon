#include <iostream>
using namespace std;

int main(){
	long long int n, a, b, c;
	char g, h;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a >> g >> b >> h >> c;
		switch (g){
			case '+':{
				if(c==a+b) cout << "correct" << endl;
				else cout << "wrong answer" << endl;
				break;
			}
			case '-':{
				if(c==a-b) cout << "correct" << endl;
				else cout << "wrong answer" << endl;
				break;
			}
			case '*':{
				if(c==a*b) cout << "correct" << endl;
				else cout << "wrong answer" << endl;
				break;
			}
			case '/':{
				if(c==a/b) cout << "correct" << endl;
				else cout << "wrong answer" << endl;
				break;
			}			
		}
	}
}
