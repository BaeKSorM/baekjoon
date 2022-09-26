#include <iostream>
using namespace std;

int main(){
	int n, c=0, nc=0;
	cin >> n;
	int cute;
	for(int i=0;i<n;i++){
		cin >> cute;
		if(cute == 0)nc++;
		else if(cute == 1) c++;
	}
	if(nc>c) cout << "Junhee is not cute!";
	else if(c>=nc) cout << "Junhee is cute!";
}
