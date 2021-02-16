#include<iostream>
//%5d -> %d

int main() {
	int N;
	int arr[10001]={1,1,};
	int num = 1;
	for (int i = 1; i <= 10001; i++) {
		int k = i;
		while (k % 10 == 0) {
			k = k % 10;
		}
		k = k % 10;
		num = arr[i-1] * k;
		if (num % 10 == 0) {
			num = num / 10;
		}
		if (num >= 10)
			num = num % 10;
		arr[i] = num;
	}
	while (true) {
		std::cin >> N;
		printf("%5d -> %d\n", N,arr[N]);
	}
}