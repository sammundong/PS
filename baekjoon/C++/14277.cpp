#include <iostream>
#include <cmath>
using namespace std;
long long int x, y,cnt;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	 
	long long int a, b, c, d, u;

	
	cin >> a >> b >> c >> d >> u;
	if (u - a >= 0) {
		x = (u - a) / b;

		cnt += x;
		cnt++;
	}

	for (long long int i = c; i <= u;) {
		if (i >= a && (i - a) % b == 0) {}
		else {
			cnt++;
		}
		i *= d;
		if (d == 1) break;

	}

	cout << cnt;
		
	
	return 0;
}