#include <iostream>
#include <math.h>

using namespace std;

int stats[21][21];
bool check[22];
int N;
int ans = 1000000000;

void dfs(int x, int pos) {
	int start, link;
	start = 0;
	link = 0;
	if (x == N / 2) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (check[i] == true && check[j] == true) start += stats[i][j];
				if (check[i] == false && check[j] == false) link += stats[i][j];
			}
		}


		int temp = abs(start - link);
		if (ans > temp) ans = temp;
		return;
	}
	for (int i = pos; i < N; i++) {
		check[i] = true;
		dfs(x + 1, i + 1);
		check[i] = false;
	}
}

int main()
{

	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> stats[i][j];
		}
	}

	dfs(0, 1);
	cout << ans;
}