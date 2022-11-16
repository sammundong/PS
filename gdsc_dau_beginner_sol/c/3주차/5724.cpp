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
    arr[0] = 1;
    for (int i = 1; i < 101; i++) {
        arr[i] = arr[i-1] + (i + 1) * (i + 1);
    }

    while (1) {
        cin >> a;
        if (a == 0) {
            break;
        }
        cout << arr[a - 1] << '\n';
    }

}
