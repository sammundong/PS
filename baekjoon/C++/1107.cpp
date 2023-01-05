#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

vector<bool> mal(10);

bool check(int now) { //고장난 키가 있는지 확인하기

    string s = to_string(now);
    for (int i = 0; i < s.length(); i++) {
        if (mal[s[i] - 48]) {//0은 아스키 코드로 48
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, c;
    cin >> n >> c;
    int tmp;
    for (int i = 0; i < c; i++) {
        cin >> tmp;
        mal[tmp] = true;
    }
    string st = to_string(n);
    int minimum = abs(n - 100); //시작점이 100이닌까 100부터 +- 해주는 경우 
    for (int i = 0; i <= 1000000; i++) {
        if (check(i)) {//고장안난 키로 만든 값
            int tmp = abs(n - i) + to_string(i).length();
            minimum = min(minimum, tmp);
        }
    }
    cout << minimum << endl;


    return 0;
}