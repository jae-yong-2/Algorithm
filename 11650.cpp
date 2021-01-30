#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<int, int>a,pair<int,int>b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	return a.first < b.first;
}
int main() {
	vector < pair<int, int>> v;
	int first,second;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> first;
		cin >> second;
		v.push_back(make_pair(first, second));
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < num; i++) {
		printf("%d %d\n", v[i].first, v[i].second);
	}
}