#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, num;
	cin >> n;
	vector<int> ar(n);
	for(int i=0;i<n;i++){
		cin >> ar[i];
	}
	for(int i=n-1;i>=0;i--){
		for(int j=i-1;j>=0;j--){
			if(ar[i]<ar[j]){
				num=ar[i];  
				ar[i]=ar[j];
				ar[j]=num;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout << ar[i] <<endl;
	}
} 
