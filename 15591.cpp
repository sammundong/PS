#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <queue>

#define INF 987654321

using namespace std;
vector <pair<int, int>> arr[5001];
bool ch[5001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N, Q;
	cin >> N >> Q;
	for (int i = 0; i < N - 1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		arr[a].push_back({ b,c });
		arr[b].push_back({ a,c });

	}
	for (int i = 0; i < Q; i++) {
		int k, nth;
		cin >> k >> nth;
		memset(ch, false, sizeof(ch));
		ch[nth] = true;
		int cnt = 0;
		queue<int> q;
		q.push(nth);
		while (!q.empty()) {
			int now = q.front();
			q.pop();
			for (int i = 0; i < arr[now].size(); i++) {
				int next = arr[now][i].first;
				int len = arr[now][i].second;
				if (ch[next]) continue;
		
				if (len >= k) {
					cnt++;
					ch[next] = true;
					q.push(next);
				}

			}
		}
		cout<<cnt<<"\n";
	}
	

	

}