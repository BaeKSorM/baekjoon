#include <iostream>
using namespace std;

int main(){
	double b=0, s=0;
	string score;
	cin >> score;
	switch(score[0]){
		case 'A':{
			b+=4;
			break;
		}
		case 'B':{
			b+=3;
			break;
		}
		case 'C':{
			b+=2;
			break;
		}
		case 'D':{
			b+=1;
			break;
		}
		default:
			break;
	}
	switch(score[1]){
		case '+':{
			b+=0.3;
			break;
		}
		case '0':{
			break;
		}
		case '-':{
			b-=0.3;
			break;
		}
		default:
			break; 
	}
	cout << fixed;
	cout.precision(1);
	cout << b;
}
