#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n;
long long int arr[3001][3001];
int count_number[3];
string str, tmp;
void bh(int x, int y, int n) {
	int first = arr[x][y];
	bool flag = true;
	
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (arr[i][j] != first) {
				flag = false;
				break;
			}
		}
	}

	if (flag) {
		count_number[first + 1]++;

	}

	else {
		for (int a = x; a < x + n; a += n / 3) {
			for (int b = y; b < y + n; b += n / 3) {
				bh(a, b, n / 3);
			}
		}
	}
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cin >> arr[y][x];
		}
	}

	bh(0, 0, n);

	for (int i = 0; i < 3; i++) {
		cout << count_number[i] << '\n';
	}
	return 0;
}

