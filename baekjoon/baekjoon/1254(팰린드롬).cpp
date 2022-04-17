#include <iostream>
#include <string>
using namespace std;
int length;
string S;
bool palindrome(int idx) {
	for (int i = 0; idx + i < length - 1 - i; i++)
	
		if (S[idx + i] != S[length - i - 1])
			return false;
		
	
	return true;
}

int main() {
	int result = 0;
	cin >> S;
	length = S.size();
	for (int i = 0; i < length; i++) {
		if (palindrome(i)) {
			result = length + i;
			break;
		}	
	}
	cout << result;
	

	return 0;
}
