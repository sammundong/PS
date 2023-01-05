#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	map<string, string> addres;
	while (n--) {
		string str, str1;
		cin >> str >> str1;
		addres.insert({ str,str1 });


	}

	while (m--) {
		string key;
		cin >> key;
		cout << addres[key];
		cout << '\n';
	}

}
