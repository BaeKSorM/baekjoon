#include <iostream>
using namespace std;

int solve(int a, char c, int b)
{
    switch(c){
    	case '+':{
    		return a+b;
			break;
		}
		case '-':{
    		return a-b;
			break;
		}
		case '*':{
    		return a*b;
			break;
		}
		case '/':{
    		return a/b;
			break;
		}
	}
}

int main(){
	int a, b, c, fr, ba;
	char f, s;
	cin >> a >> f >> b >> s >> c;
	fr=solve(solve(a, f, b), s, c);
	ba=solve(a, f, solve(b, s, c));
	if(fr>ba) cout << ba << '\n' << fr;
	else cout << fr << '\n' << ba;
}
