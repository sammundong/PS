#include <iostream>
using namespace std;

int n, m, ck[101][101];
char arr[101][101];
bool visited[51][51];
void dfs(int x, int y, char a) {
    visited[x][y] = true;
    int tx = x;
    int ty = y;

    if (a == '|') {
        if (tx < n && !visited[tx + 1][ty] && arr[tx + 1][ty] == a) {
            dfs(tx + 1, ty, a);
        }
    }
    else {
        if (ty < m && !visited[tx][ty + 1] && arr[tx][ty + 1] == a) {
            dfs(tx, ty + 1, a);
        }
    }

}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j]) {
                cnt++;
                dfs(i, j, arr[i][j]);
            }

        }
    }
    cout << cnt;
}