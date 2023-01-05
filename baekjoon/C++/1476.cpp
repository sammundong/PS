#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio;
	cin.tie();
	cout.tie();

	int E=1, S=1, M=1;
	int a=1, b=1, c=1;
	cin >> E >> S >> M;
	int sum = 1;
	while (1) {
		if (E == a && S == b && M == c) {
			cout << sum;
			break;
		}
		a++;
		b++;
		c++;
		if (a == 16) a = 1;
		if (b == 29) b = 1;
		if (c == 20) c = 1;
		sum++;
	}
	
}