#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int sum=0;
	vector<int> five(5);
	for(int i=0;i<5;i++){
		cin >> five[i];
		if(five[i]<40) sum+=40;
		else sum+=five[i];
	}
	cout << sum/5;
}

