#include<iostream>
#include<vector>
#include<utility>
using namespace std;
static int count = 0;
vector<pair<int,int>> v;//하노이탑
void fac(int num, int from, int by, int to) {
	if (num == 1) {
		v.push_back(make_pair(from, to));
		::count++;
	}
	else {
		fac(num - 1, from, to, by);
		v.push_back(make_pair(from, to));
		::count++;
		fac(num - 1, by, from, to);
	}
}
int main() {
	int N;
	cin >> N;
	fac(N,1,2,3);
	cout << ::count << "\n";
	for (int i = 0; i < v.size(); i++) {
		printf("%d %d\n", v[i].first,v[i].second);
	}
}