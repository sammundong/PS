#include <iostream>
#include <queue>
#include <vector>
using namespace std;
priority_queue<int, vector<int>,greater<int>>pq;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (k != 0) {
			pq.push(k);
		}
		else {
			if (pq.empty()) {
				cout << "0" << '\n';

			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}

		}

	}

}