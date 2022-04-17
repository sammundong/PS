#include <iostream>
using namespace std;
int g;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}


int main(void) {
	int a, b;
	cin >> a >> b;
	g = gcd(a, b);
	int m = g;
	cout << g<<'\n';
	while (1) {
		if (g % a == 0 && g % b == 0) {
			cout << g;
			break;
		}
		g = g + m;
	}

	return 0;
}