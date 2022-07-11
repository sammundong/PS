#include <iostream>
#include <queue>
#include <vector>
#include <deque>
#include <algorithm>
#include <functional>
using namespace std;
bool visited[1000001];
int T;


char ch;
int num;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> T;


	for (int i = 0; i < T; i++) {
		int k;
		cin >> k;
		
		priority_queue<pair<int, int>> pq_max;
		priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, greater<pair<long long int, long long int>>>pq_min;

		for (int j = 0; j < k; j++) {

			cin >> ch >> num;
			if (ch == 'I') {
				
				pq_max.push({ num , j });
				pq_min.push({ num , j });
				visited[j] = true;

			}
			else {
				if (num == 1) {
					{
						while (!pq_max.empty() && !visited[pq_max.top().second]) {
							pq_max.pop();
						}
						if (!pq_max.empty()) {
							visited[pq_max.top().second] = false;
							pq_max.pop();
						}
					}


				}
				else
				{

					while (!pq_min.empty() && !visited[pq_min.top().second])
					{
						pq_min.pop();
					}
					if (!pq_min.empty()) {
						visited[pq_min.top().second] = false;
						pq_min.pop();
					}
				}
			}
		}


		while (!pq_max.empty() && !visited[pq_max.top().second])

			pq_max.pop();

		while (!pq_min.empty() && !visited[pq_min.top().second])

			pq_min.pop();



		if (pq_min.empty()&& pq_max.empty())

			cout<< "EMPTY\n";

		else

			cout<< pq_max.top().first<< " " << pq_min.top().first<< "\n";
	}

	return 0;

}


