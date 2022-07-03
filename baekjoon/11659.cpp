//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//unsigned long long int arr[100001];
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int n, m;
//	cin >> n >> m;
//	vector <int> v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//
//	unsigned long long int sum = 0;
//	arr[0] = v[0];
//	for (int i = 1; i < n; i++) {
//		arr[i] = arr[i - 1] + v[i];
//	}
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		if (a == 1) {
//			cout << arr[b - 1]<<'\n';
//		}
//		else {
//			cout << arr[b - 1] - arr[a - 2]<<'\n';
//		}
//	}
//}