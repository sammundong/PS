#include <queue>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int r, g, b;

int n;
bool visited[101][101] = { false };
vector <string> ss;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int x, y;
void dfs(int x, int y)
{
	visited[x][y] = true;
	
		for (int j = 0; j < 4; j++) {
			int nx = dx[j] + x;
			int ny = dy[j] + y;
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if (!visited[nx][ny] && ss[x][y] == ss[nx][ny]) {
				dfs(nx, ny);
			}
		}
	

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		ss.push_back(s);
	}

	int cnt = 0;
	for (int p = 0; p < n; p++) {
		for (int q = 0; q < n; q++) {
			if (!visited[p][q]) {
				dfs(p, q);
				cnt++;
			}
		}
	}
	cout << cnt << " ";
	cnt = 0;
	memset(visited, false, sizeof(visited));
	for (int v = 0; v < n; v++) {
		for (int vv = 0; vv < n; vv++) {
			if (ss[v][vv] == 'G') {
				ss[v][vv] = 'R';
			}
		}
	}
	for (int p = 0; p < n; p++) {
		for (int q = 0; q < n; q++) {
			if (!visited[p][q]) {
				dfs(p, q);
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;

}
