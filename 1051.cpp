#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int N, M;
	cin >> N >> M;
	vector<string> v;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		v.push_back(str);
	}
	if (N<M) {
		for (int size = N-1; size >=0 ; size--) {

			for (int row = 0; row<N-size;row++) {
				for (int col = 0; col<M-size;col++) {
					if (v[row][col] == v[row][col + size] && v[row][col] == v[row + size][col + size] && v[row][col] == v[row + size][col]) {
						cout << (size + 1)*(size + 1) << endl;
						return 0;
					}
				}
			}
		}
	} else {//M,N º¯°æ
		for (int size = N - 1; size >= 0; size--) {

			for (int row = 0; row < N - size; row++) {
				for (int col = 0; col < M - size; col++) {
					if (v[row][col] == v[row][col + size] && v[row][col] == v[row + size][col + size] && v[row][col] == v[row + size][col]) {
						cout << (size + 1)*(size + 1) << endl;
						return 0;
					}
				}
			}
		}
	}
	return 0;
}