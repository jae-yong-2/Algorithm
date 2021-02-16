#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int L;
	cin >> L;
	vector<int> v;
	for (int i = 0; i < L; i++) {
		int number;
		cin >> number;
		v.push_back(number);
	}
	int n;
	int a, b;
	cin >> n;
	sort(v.begin(), v.end());
	for (int i = 0; i < L; i++) {
		if (v[i] >= n) {
			if (i == 0) {
				n = (n)*(v[i] - n) - 1;
				if (n < 0)
					cout << 0 << endl;
				else
					cout << n << endl;
				system("pause");
				return 0;
			}
			a = i - 1;
			b = i;
			break;
		}
	}
	n = (n - v[a])*(v[b] - n) - 1;
	if (n < 0)
		cout << 0 << endl;
	else
		cout << n << endl;
	system("pause");
}