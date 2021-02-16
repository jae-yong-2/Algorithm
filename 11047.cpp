#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N,K;
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> K;
	vector<int> v;
	int e;
	for (int i = 0; i < N; i++) {
		cin >> e;
		v.push_back(e);
	}
	int count = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (K / v[i] > 0) {
			count = K / v[i] + count;
			K = K % v[i];
		}
	}
	cout << count << "\n";
}