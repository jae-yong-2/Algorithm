#include<iostream>
#include<string>
using namespace std;
int main() {				//ÀÚ¸®¼ö°ö
	string a,b;
	cin >> a;
	cin >> b;
	int k[2] = { 0,0};
	int first, second;
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < b.length(); j++) {
			first = a[i]-48;
			second = b[j]-48;
			k[0] = k[0] + first * second;
			if (k[0] > 1000000000) {
				k[0] = k[0] % 1000000000;
				k[1]++;
			}
		}
	}
	if (k[1] > 0) {
		cout << k[1] << k[0] << "\n";
	}
	else {
		cout << k[0] << "\n";
	}
}