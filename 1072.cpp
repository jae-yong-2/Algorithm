#include<iostream>
#include<cmath>

using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);//이분탐색으로 다시
	ios::sync_with_stdio(false);
	long long int X, Y;
	cin >> X >> Y;
	int Z = Y * 100 / X;
	int first = 0, mid = 0, end = 1000000000;
	int temp;
	int ans;
	while (first<=end) {
		if (Z >=99) {
			cout << -1 << "\n";
			system("pause");
			return 0;
		}
		mid = (first + end) / 2;
		if (Z == ((Y + mid) * 100 / (X + mid))) {
			first = mid+1;
		}
		else if (Z != ((Y + mid) * 100 / (X+mid))) {
			ans = mid;
			end = mid-1;
		}
	}
	cout << ans << "\n";
	system("pause");
	return 0;
}