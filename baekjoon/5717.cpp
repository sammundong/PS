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

    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        cout << a + b << '\n';
    }

}
