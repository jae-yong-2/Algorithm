#include<iostream>
#include<algorithm>
int main() {
	int N;
	int M;
	int num;
	std::cin >> num;
	for (int time = 0; time < num; time++) {
		std::cin >> N;
		std::cin >> M;
		int output = 1;
		int max = std::max(N, M - N);
		int min = std::min(N, M - N);
		int div = 0;
		for (int i = 1; i <= M; i++) {
			div++;
			output = output * i;
			output = output / div;
			if (div == max) {
				div = 0;
			}
		}

		std::cout << output << std::endl;

	}
}