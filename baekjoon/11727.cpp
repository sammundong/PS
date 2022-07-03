#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
unsigned long long int arr[100001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n;
	arr[0] = 1;
	arr[1] = 3;
	for (int i = 2; i <= n + 1; i++) {
		arr[i] = (arr[i - 2]*2 + arr[i - 1]) % 10007;

	}
	cout << arr[n - 1];


}