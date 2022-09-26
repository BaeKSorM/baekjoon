#include <iostream>
using namespace std;

int main(){
	string a;
	cin >> a;
	int n=a.length()-1; 
	for(int i=0;i<=n/2+1;++i){
		if(a[i]==a[n--]) continue;
		else {
			cout << "0"; return 0;
		}
	}
	cout << "1";
}
