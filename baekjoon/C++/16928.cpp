#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996);
int map[102] = { 0 };
bool visit[102] = { 0 };

using namespace std;
#include <queue>
struct Person {
	int place;
	int count;
};
queue<Person> ga;
void game(int x, int c) {
	Person p;
	p.place = x;
	p.count = c;
	ga.push(p);
	while (!ga.empty()) {
		int loc = ga.front().place;
		int cnt = ga.front().count;
		ga.pop();
		for (int i = 1; i <= 6; i++) {
			int nx = loc + i;
			if (nx == 100) {
				cout << cnt + 1;
				return;
			}
			else if (nx < 100) {
				while(map[nx]!=0){
					nx = map[nx];
				}
			}
			if (!visit[nx]) {
				Person p;
				p.place = nx;
				p.count = cnt + 1;
				ga.push(p);
				visit[nx] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m,t1,t2;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> t1 >> t2;
		map[t1] = t2;
	}
	for (int i = 0; i < m; i++) {
		cin >> t1 >> t2;
		map[t1] = t2;
	}

	game(1, 0);
	

	return 0;
}