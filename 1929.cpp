#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M, N;
	cin >> M >> N;
	vector<int> v(2*N);
	for (int i = 2; i <= N;i++) {
		if (v[i] != 1) {
			if(i>=M)
				cout << i << "\n";
			for (int j = i; j <= N;) {
				v[j] = 1;
				j = j + i;
			}
		}
	}
}