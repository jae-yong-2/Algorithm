#include<iostream>
#include<algorithm>
#include<vector>

int main() {
	int num;
	std::cin >> num;
	std::vector<int> v;
	for (int i = 0; i < num; i++) {
		int e;
		std::cin >> e;
		v.push_back(e);
	}
	std::sort(v.begin(), v.end());
	for (int i = 0; i < num; i++) {
		printf("%d\n", v[i]);
	}
}