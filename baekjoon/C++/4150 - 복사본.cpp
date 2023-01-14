#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string str="1";
	int n;
	cin >> n;

	string copy;
	copy = str;
	string tmp;
	for (int i = 2; i < n; i++) {
		tmp = str;
		for (int j = 0; j < copy.size(); j++) {
			str[j] += (copy[j]-'0');
			
			if (j < copy.size() && str[j]>'9') {
				str[j] -= 10;
				if (j+1 < str.size())
					
					str[j + 1] += 1;
				else if (j+1 == copy.size())
					str += '1';
			}
			
		}
		copy = tmp;
	}


	for (int i = str.size(); i != 0; i--) {
		cout << str[i-1];
	}


	return 0;
}

	
	
