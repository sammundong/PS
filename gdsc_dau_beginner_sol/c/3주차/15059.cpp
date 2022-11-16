#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
using namespace std;
int arr[102];
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int a;
    int b;
    int c;

    int i;
    int j;
    int k;

    cin >> a >> b >> c;
    cin >> i >> j >> k;
    int sum = 0;
    if (a < i) {
        sum = sum + i - a;
    }

    if (b < j) {
        sum = sum + j - b;
    }

    if (c < k) {
        sum = sum + k - c;
    }


    cout << sum;
}
