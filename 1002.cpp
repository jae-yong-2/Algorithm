#include<iostream>
#include<cmath>
using namespace std;
int main() {//ÅÍ·¿
	int time;
	cin >> time;
	
	double x1, y1, r1, x2, y2, r2;
	for (int i = 0; i < time; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double r = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2) {
				cout << -1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else {
			if ((r1 + r2 == r) || (abs(r1 - r2) == r)) {
				cout << 1 << endl;
			}
			else if (r1 + r2 > r) {
				if (abs(r1 - r2) > r) {
					cout << 0 << endl;
				}
				else if (abs(r1 - r2) < r) {
					cout << 2 << endl;
				}
			}
			else if (r1 + r2 < r) {
				cout << 0 << endl;
			}
		}
	}
}