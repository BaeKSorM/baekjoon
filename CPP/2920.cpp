#include <iostream>
using namespace std;

int main(){
	int ar[8], check=0;
	for(int i=0;i<8;++i) {
		cin >> ar[i];
		if(ar[i]==i+1) check++;
		else if(ar[i]==8-i) check--;
	}
	if(check==8) cout << "ascending";
	else if(check==-8) cout << "descending";
	else cout << "mixed";
}
