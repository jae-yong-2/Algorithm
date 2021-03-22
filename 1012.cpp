#include<iostream>
#include<utility>
using namespace std;
pair<int, int> board[51][51] = { make_pair(0,0), };
int cnt = 0;

void find(int row, int col, int M , int N) {
	if (row < 0 || row >= M || col < 0 || col >= N) {
		return;
	}
	if (board[row][col].first == 0 || board[row][col].second == 1) {
		return;
	}
	board[row][col].second = 1;
	find(row + 1, col, M, N);
	find(row - 1, col, M, N);
	find(row , col + 1, M, N);
	find(row , col - 1, M, N);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T=0, M=0, N=0, K=0;
	cin >> T;
	for (int test = 0; test < T; test++) {//test case
		cin >> M >> N >> K;
		for (int i = 0; i < K; i++) {
			int a=0, b=0;
			cin >> a >> b;
			board[a][b].first=1;//first = linked
		}
		for (int row = 0; row < M; row++) {
			for (int col = 0; col < N; col++) {
				if (board[row][col].first==1 && board[row][col].second == 0) {
					find(row, col, M, N);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
		cnt = 0;
		fill(&board[0][0], &board[50][51], make_pair(0, 0));
	}
}