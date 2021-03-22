#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> v[10001];
int count = 0;
void dfs(int start) {
	int visit[10001] = { 0, };
	stack<int> s;
	s.push(start);
	while (!s.empty()) {
		start = s.top();
		s.pop();
		if (visit[start] != 1) {
			visit[start] = 1;
			::count++;
			for (auto i : v[start]) {
				if (visit[i] != 1) {
					s.push(i);
				}
			}
		}
	}
}

int main() {
	int N = 0, M = 0;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a = 0, b = 0;
		cin >> a >> b;
		v[b].push_back(a);
	}
	vector<int> s;
	int max = 0;
	dfs(1);
	s.push_back(1);
	max = ::count;
	::count = 0;
	for (int i = 2; i <= N; i++) {
		dfs(i);
		if (max < ::count) {
			s.clear();
			s.resize(0);
			s.push_back(i);
			max = ::count;
		}
		else if (max==::count) {
			s.push_back(i);
		}
		::count = 0;
	}
	for (auto i : s) {
		cout << i << " ";
	}
}