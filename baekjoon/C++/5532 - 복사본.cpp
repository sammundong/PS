#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int a, b, c, d, f;
	cin >> a >> b >> c >> d >> f;
	int m, m1;
	m = b / d;
	m1 = c / f;
	int max;
	if (m == m1) {
		if (b % m != 0) {
			max = m + 1;
		}
		else
			if (c % m1 != 0) {
				max = m1 + 1;
			}
			else
				max = m1;
	}
	//¸òÀÌ °°À»¶§ 

	//¸òÀÌ ´Ù¸¦¶§
	else {
		
		max = m > m1 ? m : m1;
		if (max == m) {
			if (b / max) {
				max++;
			}

		}
		if (max == m1) {
			if (c / max) {
				max++;
			}

		}
	}
	int result = a - max;
	if (result <= 0) {
		result = 0;
	}
	cout << result;


	return 0;
}