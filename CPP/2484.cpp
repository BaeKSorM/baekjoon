#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, max=0, ar[4], sum;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> ar[0] >> ar[1] >> ar[2] >> ar[3];
		if(ar[0]==ar[1]&&ar[1]==ar[2]&&ar[2]==ar[3]){
			sum=ar[0]*5000+50000;
		}
		else if(ar[0]==ar[1]&&ar[1]==ar[2]){
			sum=ar[0]*1000+10000;
		}
		else if(ar[1]==ar[2]&&ar[2]==ar[3]){
			sum=ar[1]*1000+10000;
		}
		else if(ar[0]==ar[2]&&ar[2]==ar[3]){
			sum=ar[0]*1000+10000;
		}
		else if(ar[0]==ar[1]&&ar[1]==ar[3]){
			sum=ar[0]*1000+10000;
		}
		else if(ar[0]==ar[1]&&ar[2]==ar[3]){
			sum=ar[0]*500+ar[2]*500+2000;
		}
		else if(ar[0]==ar[2]&&ar[1]==ar[3]){
			sum=ar[0]*500+ar[1]*500+2000;
		}
		else if(ar[0]==ar[3]&&ar[1]==ar[2]){
			sum=ar[0]*500+ar[2]*500+2000;
		}
		else if(ar[0]==ar[1]){
			sum=ar[0]*100+1000;
		}
		else if(ar[0]==ar[2]){
			sum=ar[0]*100+1000;
		}
		else if(ar[0]==ar[3]){
			sum=ar[0]*100+1000;
		}
		else if(ar[1]==ar[2]){
			sum=ar[1]*100+1000;
		}
		else if(ar[1]==ar[3]){
			sum=ar[1]*100+1000;
		}
		else if(ar[2]==ar[3]){
			sum=ar[2]*100+1000;
		}
		else{
			sort(ar, ar+4);
			sum=ar[3]*100;
		}
		if(sum>max){
			max=sum;
		}
	}
	cout << max;
}
