#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	int n;
	int ar[3];
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> ar[0] >> ar[1] >> ar[2];
		sort(ar, ar+3);
		cout << "Scenario #" << i << ":" << endl;
		if(pow(ar[0], 2)+pow(ar[1], 2)==pow(ar[2], 2)){
			cout << "yes" << endl << endl;
		}
		else{
			cout << "no" << endl << endl;
		}
	}
}
