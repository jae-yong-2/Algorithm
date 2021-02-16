#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int time;
	cin >> time;
	queue<int> v;
	for (int i = 0; i < time; i++) {
		string str;
		cin>>str;
		
		if (str[1] == 'o') {
			if (v.size() == 0) {
				cout << -1 << "\n";
				continue;
			}
			else {
				cout << v.front() << "\n";
				v.pop();
			}
		}else if (str[0] == 'p') {
			int num;
			cin >> num;
			v.push(num);
		}
		
		else if (str[0] == 's') {
			cout << v.size() << "\n";
		}
		else if (str[0] == 'e') {
			if (v.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (str[0] == 'f') {
			if (v.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << v.front() << "\n";
			}
		}
		else if (str[0] == 'b') {
			if (v.empty()) {
				cout << -1 << "\n";
				continue;
			}
			else {
				cout << v.back() << "\n";
			}
		}
	}
}