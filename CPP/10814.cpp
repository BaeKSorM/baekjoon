#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, string> i, pair<int, string> j)
{
	return i.first < j.first;
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int, string>> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i].first >> v[i].second;
	}
	stable_sort(v.begin(), v.end(), comp); // comp or less<자료형>()
	for (int i = 0; i < n; ++i)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
}
