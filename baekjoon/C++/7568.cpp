#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(void) {
	int rank[51] = { 0, };
	int n;

	cin >> n;
	
	vector <vector <int>> arr;
	int h, w;
	for (int i = 0; i < n; i++) {

		cin >> h >> w;

		arr.push_back({ h,w });
	}
	for (int i = 0; i < n; i++) {
		int count = 1;
		for (int j = 0; j < n; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
				count++;
			}
		}
		arr[i].push_back(count);
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i][2] << " ";
	}



	return 0;
}