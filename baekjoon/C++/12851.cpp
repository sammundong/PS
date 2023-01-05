#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int N, K;
int ccount;
struct pa {

	int place;
	int time;
	
};
bool visited[100001];
queue <pa> q;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> K;
	if (N == K) {
		cout << 0 << '\n' << 0;
		return 0;
	}
	
	q.push({ N,0 });
	int num = 0;
	int result_place = 0;
	while (!q.empty()) {
		int p = q.front().place;
		int t = q.front().time;
		q.pop();
		visited[p] = true;
	
		if (result_place && p == K && result_place == t) {
			num++;
		}

		if (p == K && !result_place) {
			result_place = t;
			num++;
		}
		
		if (p + 1 < 100001 && !visited[p + 1]) {
			q.push({ p + 1,t + 1 });
		}
		
		if (p - 1 >= 0 && !visited[p-1]) {
			q.push({ p-1,t + 1 });
		}

		if (p*2 < 100001 && !visited[p*2]) {
			q.push({ p*2,t + 1 });
		}

	}
	cout << result_place << '\n' << num;


	return 0;
}



