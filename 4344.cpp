#include<iostream>
#include<vector>
#include<numeric>
int main() {
	int num = 0;
	std::cin >> num;
	for (int i = 0; i < num; i++) {
		int time = 0;
		double over = 0;
		std::cin >> time;
		std::vector<int> v;
		for (int j = 0; j < time; j++) {
			int e;
			std::cin >> e;
			v.push_back(e);
		}
		double mean = std::accumulate(v.begin(), v.end(), 0.0) / v.size();
		for (int j = 0; j < time; j++) {
			if (v[j] > mean)
				over++;
		}
		float count = over / v.size();
		count = count * 100;
		printf("%.3f%%\n", count);
	}
}