//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//queue <pair<int, int>> q;
//int n, m, cnt;
//long long c = 1;
//bool check[1000010];
//int co[100001][1];
//int main(void) {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//
//	cin >> n >> m;
//	cnt = 0;
//	q.push(pair<int, int>(n, 0));
//	if (n == m) {
//		cout << "0";
//		return 0;
//	}
//	int cost = 0;
//	while (!q.empty()) {
//
//
//		int k = q.front().first;
//		int cost = q.front().second;
//		q.pop();
//
//		if (k == m) {
//			cnt = cost;
//			break;
//		}
//
//		cout << cost << endl;
//		int mi_1 = k - 1;
//		int pl_1 = k + 1;
//		int gop = k * 2;
//
//		if (mi_1 >= 0 && co[mi_1][0] == 0) {
//			co[mi_1][0] = 1;
//
//			q.emplace(mi_1, cost + 1);
//		}
//
//
//
//		if (pl_1 <100001 && !check[pl_1]) {
//			check[pl_1] = true;
//
//			q.emplace(pl_1, cost + 1);
//		}
//
//		if (gop < 100001  && !check[gop]) {
//			check[gop] = true;
//
//			q.emplace(gop, cost + 1);
//		}
//
//
//	}
//
//	cout << cnt;
//	return 0;
//}

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector <int> v;
int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	int sum = 0;
	long long int total = 0;
	for (int i = 0; i < v.size(); i++) {
		sum = sum + v[i];
		total += sum;
	}
	cout << total;

}