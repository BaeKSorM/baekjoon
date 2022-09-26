#include <iostream>
using namespace std;

int main(){
	int ar[5];
	for(int i=0;i<5;i++){
		cin >> ar[i];
	}
	int a=ar[1]/ar[4], b=ar[2]/ar[3];
	if(a>b){
		cout << ar[0]-a;
	}
	else if(a<b){
		cout << ar[0]-b;
	}
	
}
