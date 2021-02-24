#include<iostream>
#include<queue>
#include<stack>
#include<list>
using namespace std;

bool visit[1001] = { false, };
list<int> edge[1001];
void bfs(list<int> list[], int start) {
	int visit[1001];
	queue<int> q;
	q.push(start);
	while (!q.empty()) {
				int start = q.front();
				q.pop();
				if (visit[start] != 1) {
					visit[start] = 1;
					cout << start << " ";
					for (auto i : list[start]) {
						if (visit[i] != 1) {
							q.push(i);
						}
					}
				}
		
			}
		}

void dfs(list<int> list[], int start) {
	int visit[1001];
	stack<int> s;
	s.push(start);
	while (!s.empty()) {
		start = s.top();
		s.pop();
		if (visit[start] != 1) {
			visit[start] = 1;
			cout << start << " ";
			for (auto i : list[start]) {
				if (visit[i] != 1) {
					s.push(i);
				}
			}
		}
		
	}
}
		//void dfs(int start) {
		//	if (visit[start] == true)
		//		return;
		//	visit[start] = true;
		//	cout << start << ' ';
		//	int size = edge[start].size();
		//	for (int i = 0; i < size ; i++) {
		//		int x = edge[start].front();
		//		edge[start].pop_front();
		//		dfs(x);
		//	}
		//}
		//void bfs(int start) {
		//	if (visit[start] == true)
		//		return;
		//	visit[start] = true;
		//	cout << start << ' ';
		//	int size = edge[start].size();
		//	for (int i = 0; i < size; i++) {
		//		int x = edge[start].front();
		//		bfs(x);
		//		edge[start].pop_front();
		//	}
		//
		//}


		int main() {
			int N, M, V;
			cin >> N;
			cin >> M;
			cin >> V;
			int node1, node2;
			for (int i = 0; i < M; i++) {
				cin >> node1 >> node2;
				edge[node1].push_back(node2);
				edge[node2].push_back(node1);
			}
			for (int i = 1; i < N + 1; i++) {
				edge[i].sort(greater<>());
			}
				dfs(edge,V);
			for (int i = 0; i < 1001; i++)
				visit[i] = 0;
			for (int i = 1; i < N + 1; i++) {
				edge[i].sort();
			}
			cout << '\n';
			bfs(edge, V);
			cout << '\n';
		}