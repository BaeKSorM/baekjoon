#include <iostream>
using namespace std;

int main(){
	int n, ch, c=0;
	cin >> n;
	int nu[n];
	for(int i=0;i<n;++i){
		cin >> nu[i];
	}
	for(int i=0;i<n;++i){
		ch=0;
		for(int j=1;j<=nu[i];++j){
			if(nu[i]%j==0) ch++;
		}
		if(ch==2) c++;
	}
	cout << c;
} 
