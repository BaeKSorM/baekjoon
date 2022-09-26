#include <iostream>
using namespace std;

int main(){
	int n, w, h, r, c, h1, w1;
	cin >> n;
	for(int i=0;i<n;++i){
		c=0;
		cin >> h >> w >> r;
		h1=r%h;
		w1=r/h;
		if(h1>0) c++;
		else h1=h;
		cout << h1*100+w1+c << '\n';
	}
}
