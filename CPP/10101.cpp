#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	
	if(a+b+c==180){
		if(a==60&&b==60&&c==60){
			cout << "Equilateral";
		}
		else{
			if(a==b||b==c||c==a){
				cout << "Isosceles";
			}
			else{
				cout << "Scalene";
			}
		} 
	}
	else{
		cout << "Error";
	}
}
