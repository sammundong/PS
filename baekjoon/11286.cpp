#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct comp {
	bool operator()(int a, int b) {
		if (abs(a) == abs(b)) {
			return a > b;
		}
		else {
			return abs(a) > abs(b);
		}
	}
};
priority_queue<long long int, vector<long long int>, comp>pq;
long long int count_mius[100001];
long long int result;
long long int n, m;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	long long int k;
	for (long long int i = 0; i < n; i++) {
		cin >> k;
		
		if (k == 0) {
			if (pq.empty()) {
				cout << '0' << '\n';
			}
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}


		else {
			pq.push(k);
		}
	}
}

	
