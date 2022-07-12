#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
priority_queue<long long int>pq;
int mi = 101;
int arr[101][101];
bool visited[101];
int result;
int flag;
int n, m;
void dfs(int num) {
	visited[num] = true;
	for (int i = 1; i <= n; i++) {
		if (arr[num][i] && !visited[i]) {
			dfs(i);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	cin >> n >> m;
	int a, b;


	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a][b] = true;
		arr[b][a] = true;

	}
	for (int num = 0; num < n; num++) {
		result = 0;
		memset(visited, false, sizeof(bool) * 101);
		for (int i = 1; i <= n; i++) {
			if (!visited[i]) {
				result++;
				dfs(i);
			}
		}
		if (result < mi) {
			flag = num + 1;
		}
	}
	cout << flag;
}