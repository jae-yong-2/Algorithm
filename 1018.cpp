#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const char w_board[8][8] = { {'W','B','W','B','W','B','W','B'},
							{'B','W','B','W','B','W','B','W'},
							{'W','B','W','B','W','B','W','B'},
							{'B','W','B','W','B','W','B','W'},
							{'W','B','W','B','W','B','W','B'},
							{'B','W','B','W','B','W','B','W'},
							{'W','B','W','B','W','B','W','B'},
							{'B','W','B','W','B','W','B','W'} };

const char b_board[8][8] = { {'B','W','B','W','B','W','B','W'},
							{'W','B','W','B','W','B','W','B'},
							{'B','W','B','W','B','W','B','W'},
							{'W','B','W','B','W','B','W','B'},
							{'B','W','B','W','B','W','B','W'},
							{'W','B','W','B','W','B','W','B'},
							{'B','W','B','W','B','W','B','W'},
							{'W','B','W','B','W','B','W','B'} };

int main() {
	int N;
	int M;
	int min = 64;
	int count1 = 0;
	int count2 = 0;
	char board[50][50];

	string str;
	cin >> N;
	cin >> M;

	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < M; j++) {
			board[i][j] = str[j];
		}
	}
	for (int row = 0; row <= N - 8; row++) {
		for (int col = 0; col <= M - 8; col++) {

			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if (board[row + i][col + j] != w_board[i][j]) {
						count1++;
					}
					if (board[row + i][col + j] != b_board[i][j]) {
						count2++;
					}
				}
			}
			min= std::min(std::min(count1, count2),min);
			count1 = 0;
			count2 = 0;

		}
	}
	cout << min << endl;
}