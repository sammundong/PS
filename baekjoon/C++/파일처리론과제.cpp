#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
using namespace std;

char bit;
int a, b;

int main() {

	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);


	int n = 0;
	cin >> n;

	while (n--) {
		int count = 0;
		cin >> count;

		int visit[5] = { 1,1,1,1,1 };


		int cnt = 0;
		int be = 0; //이전값
		vector <int> v;
		vector <vector <int>> v2(10);

		for (int j = 0; j < count; j++) { // 몇 개 입력받을건데?
			int q;

			cin >> q;

			int hello = 0;

			if (v.size() == 5) {
				for (int fi = 0; fi < 5; fi++) {
					if (visit[fi] == 1) {
						hello = 1;
					}
				}// hello가 1이면 다 동결이 안 됨

				if (hello != 1) {
					for (int re = 0; re < 5; re++) {
						visit[re] = 1;
					}
					cnt++;
				}


				int wh = 0;
				int mi = 123456789;
				for (int x = 0; x < v.size(); x++) {
					if (visit[x] == 1 && mi > v[x]) {
						mi = v[x];
						wh = x;
					}
				}

				v[wh] = q;
				v2[cnt].push_back(mi);
				if (q <= mi) {
					visit[wh] = 0;
				}

			}

			else {
				v.push_back(q);
			}

		}

		vector <int> v3;
		for (int i = 0; i < v.size(); i++) {
			if (visit[i] == 1) {
				v3.push_back(v[i]);
			}
		}
		sort(v3.begin(), v3.end());
		for (int i = 0; i < v3.size(); i++) {
			v2[cnt].push_back(v3[i]);
		}

		vector <int> v4;
		for (int i = 0; i < v.size(); i++) {
			if (visit[i] == 0) {
				if (!v3.empty()) {
					v4.push_back(v[i]);
				}
			}
		}


		if (!v3.empty() && count > 5) {
			cnt++;
			sort(v4.begin(), v4.end());
			for (int i = 0; i < v4.size(); i++) {
				v2[cnt].push_back(v4[i]);
			}
		}
		cout << cnt + 1 << '\n';

		for (int i = 0; i < v2.size(); i++) {
			for (int j = 0; j < v2[i].size(); j++) {
				cout << v2[i][j] << " ";
			}
			if (v2[i].size() != 0)
				cout << '\n';
		}
	}

}

