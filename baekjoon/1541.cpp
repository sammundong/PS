#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <long long int> vec;
vector <char> pm;
vector <long long int> k;
string str, tmp;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	cin >> str;

	long long int point = 0;
	for (long long int i = 0; i < str.size(); i++) {
		if (str[i] == '+' || str[i] == '-') {
			long long int q = stoi(tmp);
			vec.push_back(q);
			pm.push_back(str[i]);
			tmp = "";
		}
		else {
			tmp += str[i];
		}

 
	}

	long long int q = stoi(tmp);
	vec.push_back(q);
	if (pm.size() == 0) {
		cout << vec[0];
		return 0;
	}
	//숫자 문자 구분 완료
	for (long long int i = 0; i < pm.size(); i++) {
		if (pm[i] == '+') {
			
			long long int sum = vec[i];
			while (true) { //+한개이상일때 처리

				if (i == pm.size() ||pm[i] == '-') {
					k.push_back(sum);
					break;
				}
				sum += vec[i+1];
				i++;
			}
		}
		else {
			k.push_back(vec[i]);
		}
	}//+= 처리해서 k에 넣기 

	
	
	if(pm[pm.size()-1]=='-'){
		k.push_back(vec[vec.size() - 1]);
	}
	

	if (k.size() == 1) {
		cout << k[0];
		return 0;
	}
	long long int result = k[0];
	for (long long int i = 1; i < k.size(); i++) {
		result -= k[i];
	}

	cout << result;
	

}