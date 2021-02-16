#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int count;
	int index;
	cin >> count;
	cin >> index;
	vector<int> v;
	for (int i = 1; i <= count; i++) {
		if (count%i == 0) {
			v.push_back(i);
		}
	}

	cout << v[index - 1] << endl;
}