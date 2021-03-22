#include<iostream>
using namespace std;
char tree[26][2] = { '.', };
void pre(char root) {
	if (root == '.' || root == 0) {
		return;
	}
	cout << root;
	pre(tree[root - 'A'][0]);
	pre(tree[root - 'A'][1]);
}
void in(char root) {
	if (root == '.' || root == 0) {
		return;
	}
	in(tree[root - 'A'][0]);
	cout << root;
	in(tree[root - 'A'][1]);
}
void post(char root) {
	if (root == '.' || root == 0) {
		return;
	}
	post(tree[root - 'A'][0]);
	post(tree[root - 'A'][1]);
	cout << root;
}

int main() {
	int T;
	char root=0, left=0, right=0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> root >>left >>right;
		tree[root-'A'][0] = left;
		tree[root-'A'][1] = right;
	}
	pre('A');
	cout << '\n';
	in('A');
	cout << '\n';
	post('A');
	cout << '\n';
}