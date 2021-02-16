#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() {
	int N;
	vector<int> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	if (v.size() % 2 == 0) {
		int size = v.size() / 2;
		cout << v[size] * v[size - 1]<<endl;
	}
	else {
		int size = v.size() / 2;
		cout << v[size]*v[size] << endl;
	}
}