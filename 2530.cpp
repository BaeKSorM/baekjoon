#include <iostream>
using namespace std;

int main(){
	int h, m, s, add;
	cin >> h >> m >> s >> add;
	cout << (h+(m+(s+add)/60)/60)%24 << ' ' << (m+(s+add)/60)%60 << ' ' << (s+add)%60;
}
