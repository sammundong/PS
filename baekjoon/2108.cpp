#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
#pragma warning (disable:4996);
using namespace std;
vector <int> arr;
int ci[9000];
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		ci[k + 4000]++;
		arr.push_back(k);
		sum += k;
	}
	int max = 0;
	int m = 0;
	for (int i = 0; i < 8999; i++) {
		if (max < ci[i]) {
			m = i;
			max = ci[i];
		}
	}

	for (int i = 0; i < 8999; i++) {
		if (max == ci[i] && i != m) {
			m = i;
			break;
		}
	}
	sort(arr.begin(), arr.end());
	cout << floor((sum / (double)n)+0.5)<<'\n';
	cout << arr[n / 2] << '\n';
	cout << m-4000 << '\n';
	cout << arr[arr.size() - 1] - arr[0] << '\n';

	return 0;
}